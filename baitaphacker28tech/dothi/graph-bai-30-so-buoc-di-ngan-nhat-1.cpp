#include <bits/stdc++.h>
using namespace std;
int visited[1005][1005];
int d[1005][1005];
int n, s, t, u, v;
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int BFS(int x, int y)
{
    queue<pair<int, int>> wait;
    wait.push({x, y});
    visited[x][y] = 0;
    while (!wait.empty())
    {
        auto it = wait.front();
        wait.pop();
        for (int i = 0; i < 8; i++)
        {
            int i1 = it.first + dx[i], j1 = it.second + dy[i];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && visited[i1][j1] == 1)
            {
                d[i1][j1] = d[it.first][it.second] + 1;
                visited[i1][j1] = 0;
                wait.push({i1, j1});
                if (i1 == u && j1 == v)
                {
                    return d[i1][j1];
                }
            }
        }
    }
    return -1;
}
int main()
{
    cin >> n >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> visited[i][j];
        }
    }
    cout << BFS(s, t) << endl;
}