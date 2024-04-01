#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int a[505][505], n, m, dem;
void loang(int i, int j)
{
    a[i][j] = 0;
    dem++;
    for (int k = 0; k < 4; k++)
    {
        int xx = i + dx[k], yy = j + dy[k];
        if (xx >= 0 && xx < n && yy >= 0 && yy < m && a[xx][yy] == 1)
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
    int demma = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                dem = 0;
                loang(i, j);
                demma = max(dem, demma);
            }
        }
    }
    cout << demma;
}