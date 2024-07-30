#include <bits/stdc++.h>
using namespace std;
vector<int> adjacent[1005];
int visited[1005];
vector<pair<int, int>> canh;
void DFSS(int i)
{
    visited[i] = 1;
    for (auto it : adjacent[i])
    {
        if (visited[it] == 0)
        {
            DFSS(it);
        }
    }
}
void DFS(int i, int s, int t)
{
    visited[i] = 1;
    for (auto it : adjacent[i])
    {
        if (i == s && it == t || i == t && it == s)
            continue;
        if (visited[it] == 0)
        {
            DFS(it, s, t);
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
        canh.clear();
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
            adjacent[y].push_back(x);
            canh.push_back({x, y});
        }
        int tplt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == 0)
            {
                tplt++;
                DFSS(i);
            }
        }
        for (auto it : canh)
        {
            memset(visited, 0, sizeof(visited));
            int dem = 0;
            for (int i = 1; i <= n; i++)
            {
                if (visited[i] = 0)
                {
                    DFS(i, it.first, it.second);
                    dem++;
                }
            }
            if (dem > tplt)
            {
                cout << it.first << " " << it.second << endl;
            }
        }
    }
}