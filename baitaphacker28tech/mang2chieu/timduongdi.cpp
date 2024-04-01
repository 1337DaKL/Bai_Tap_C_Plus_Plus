#include <bits/stdc++.h>
using namespace std;
int n, m, s, t, u, v, ok = 0, a[109][105];
void nhap()
{
    cin >> n >> m >> s >> t >> u >> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
}
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
void loang(int i, int j)
{
    a[i][j] = 0;
    if (i == u && j == v)
    {
        ok = 1;
    }
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
    nhap();
    loang(s, t);
    if (ok)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}