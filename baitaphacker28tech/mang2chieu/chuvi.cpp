#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, m, a[105][105], b[105][105], chuvi = 0;
void loang(int i, int j)
{
    a[i][j] = 0;
    int dem = 0;
    for (int k = 0; k < 4; k++)
    {
        int xx = i + dx[k], yy = j + dy[k];
        if (b[xx][yy] == 1)
        {
            dem++;
        }
    }
    chuvi += (4 - dem);
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
            b[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                loang(i, j);
                cout << chuvi << " ";
                chuvi = 0;
            }
        }
    }
}