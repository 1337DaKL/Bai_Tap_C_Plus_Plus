#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m;
int a[55][55];
void loang(int x, int y)
{
    a[x][y] = 0;
    for (int k = 0; k < 8; k++)
    {
        int xx = x + dx[k];
        int yy = y + dy[k];
        while (xx >= 0 && xx < n && yy >= 0 && yy < m && a[xx][yy] == 1)
        {
            loang(xx, yy);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                dem++;
                loang(i, j);
            }
        }
    }
    cout << dem;
}