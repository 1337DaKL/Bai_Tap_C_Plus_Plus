#include <bits/stdc++.h>
using namespace std;
vector<int> adjacent[1005];
int visited[1005];
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : adjacent[i])
    {
        if (!visited[it])
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
        int tplt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                tplt++;
                DFS(i);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            memset(visited, 0, sizeof(visited));
            int cnt = 0;
            visited[i] = 1;
            for (int j = 1; j <= n; j++)
            {
                if (!visited[j])
                {
                    cnt++;
                    DFS(j);
                }
            }
            if (cnt > tplt)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}