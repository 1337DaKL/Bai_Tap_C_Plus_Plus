#include <bits/stdc++.h>
using namespace std;
int visited[100005];
vector<int> adjacent[100005];
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : adjacent[i])
    {
        if (visited[it] == 0)
        {
            DFS(it);
        }
    }
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
        memset(visited, 0, sizeof(visited));
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
            adjacent[y].push_back(x);
        }
        DFS(1);
        int ok = 1;
        for (int i = 2; i <= n; i++)
        {
            if (!visited[i])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}