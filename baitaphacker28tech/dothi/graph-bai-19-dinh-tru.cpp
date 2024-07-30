#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
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
    for (int i = 1; i <= n; i++)
    {
        memset(visited, 0, sizeof(visited));
        visited[i] = 1;
        int cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            if (visited[j] == 0)
            {
                DFS(j);
                cnt++;
            }
        }
        if (cnt > tplt)
            dem++;
    }
    cout << dem << endl;
}