#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
vector<pair<int, int>> way;
int visited[1005];
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            DFS(it);
        }
    }
}
void DFScc(int i, int s, int t)
{
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (i == s && it == t || i == t && it == s)
            continue;
        if (visited[it] == 0)
        {
            DFScc(it, s, t);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
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
            DFS(i);
        }
    }
    int dem = 0;
    for (auto it : way)
    {
        memset(visited, 0, sizeof(visited));
        int s = it.first, t = it.second;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (visited[i] == 0)
            {
                cnt++;
                DFScc(i, s, t);
            }
        }
        if (cnt > tplt)
        {
            dem++;
        }
    }
    cout << dem << endl;
}