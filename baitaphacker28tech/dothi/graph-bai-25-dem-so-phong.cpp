#include <bits/stdc++.h>
using namespace std;
int visited[1005][1005];
char a[1005][1005];
int n, m;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
void BFS(int s, int t)
{
    queue<pair<int, int>> wait;
    visited[s][t] = 1;
    wait.push({s, t});
    while (!wait.empty())
    {
        pair<int, int> it = wait.front();
        wait.pop();
        int i1 = it.first, j1 = it.second;
        for (int i = 0; i < 4; i++)
        {
            int ii = i1 + dx[i], jj = j1 + dy[i];
            if (ii >= 1 && ii <= n && jj >= 1 && jj <= m && visited[ii][jj] == 0)
            {
                wait.push({ii, jj});
                visited[ii][jj] = 1;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '#')
            {
                visited[i][j] = 1;
            }
        }
    }
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (visited[i][j] == 0)
            {
                dem++;
                BFS(i, j);
            }
        }
    }
    cout << dem << endl;
}