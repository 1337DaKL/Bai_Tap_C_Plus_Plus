#include <bits/stdc++.h>
using namespace std;
vector<int> adjacent[1005];
int color[1005];
int ok = 0;
void DFS(int i)
{
    color[i] = 1;
    for (auto it : adjacent[i])
    {
        if (color[it] == 0)
        {
            DFS(it);
        }
        else if (color[it] == 1)
        {
            ok = 1;
            break;
        }
    }
    color[i] = 2;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            adjacent[i].clear();
        }
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
        }
        ok = 0;
        for (int i = 1; i <= n; i++)
        {
            memset(color, 0, sizeof(color));
            DFS(i);
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}