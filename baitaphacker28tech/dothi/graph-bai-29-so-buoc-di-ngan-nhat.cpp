#include <bits/stdc++.h>
using namespace std;
int visited[1005][1005];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int d[1005][1005];
int ss, tt, n;
int dem = 0;
int BFS(int s, int t)
{
    queue<pair<int, int>> wait;
    wait.push({s, t});
    visited[s][t] = 0;
    while (!wait.empty())
    {
        int xx = wait.front().first, yy = wait.front().second;
        wait.pop();
        for (int i = 0; i < 8; i++)
        {
            int i1 = xx + dx[i], j1 = yy + dy[i];
            if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && visited[i1][j1])
            {
                d[i1][j1] = d[xx][yy] + 1;
                if (i1 == ss && j1 == tt)
                {
                    return d[i1][j1];
                }
                wait.push({i1, j1});
                visited[i1][j1] = 0;
            }
        }
    }
    return -1;
}
int main()
{
    cin >> n;
    int s, t;
    cin >> s >> t >> ss >> tt;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> visited[i][j];
        }
    }
    cout << BFS(s, t);
}