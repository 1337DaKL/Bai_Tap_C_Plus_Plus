#include <bits/stdc++.h>
using namespace std;
int visited[1005][1005];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m;
void DFS(int i, int j)
{
    visited[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int ii = dx[k] + i;
        int jj = dy[k] + j;
        if (ii >= 1 && ii <= n && jj >= 1 && jj <= m && visited[ii][jj])
        {
            DFS(ii, jj);
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> visited[i][j];
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (visited[i][j])
                {
                    cnt++;
                    DFS(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
}