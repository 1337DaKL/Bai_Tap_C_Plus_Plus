#include <bits/stdc++.h>
using namespace std;
vector<int> adjacent[1005];
int parent[1005];
int visited[1005];
int ok;
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : adjacent[i])
    {
        if (!visited[it])
        {
            parent[it] = i;
            DFS(it);
        }
        else if (it != parent[i])
        {
            ok = 1;
            return;
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
        memset(parent, 0, sizeof(parent));
        for (int i = 1; i <= n; i++)
        {
            adjacent[i].clear();
        }
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
            adjacent[y].push_back(x);
        }
        ok = 0;
        for (int i = 1; i <= n; i++)
        {
            memset(visited, 0, sizeof(visited));
            DFS(i);
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}