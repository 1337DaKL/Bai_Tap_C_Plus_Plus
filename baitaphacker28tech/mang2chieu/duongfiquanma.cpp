#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n, s, t, u, v, ok = 0, a[105][105];
void nhap()
{
    cin >> n >> s >> t >> u >> v;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
void loang(int i, int j)
{
    if (i == u && j == v)
        ok = 1;
    a[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int xx = i + dx[k], yy = j + dy[k];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && a[xx][yy] == 1)
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