#include <bits/stdc++.h>
using namespace std;
void DFS(int i, int visited[], vector<int> ve[])
{
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            DFS(it, visited, ve);
        }
    }
}
void DFSCC(int i, int visited[], vector<int> ve[], int s, int t)
{
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (i == s && it == t || i == t && it == s)
        {
            continue;
        }
        if (visited[it] == 0)
        {
            DFSCC(it, visited, ve, s, t);
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
        vector<int> ve[n + 1];
        int visited[n + 1];
        memset(visited, 0, sizeof(visited));
        vector<pair<int, int>> way;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            ve[x].push_back(y);
            ve[y].push_back(x);
            way.push_back({x, y});
        }
        int tplt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == 0)
            {
                tplt++;
                DFS(i, visited, ve);
            }
        }
        for (auto it : way)
        {
            int cnt = 0;
            memset(visited, 0, sizeof(visited));
            for (int i = 1; i <= n; i++)
            {
                if (visited[i] == 0)
                {
                    cnt++;
                    DFSCC(i, visited, ve, it.first, it.second);
                }
            }
            if (cnt > tplt)
            {
                cout << it.first << " " << it.second << " ";
            }
        }
        cout << endl;
    }
}