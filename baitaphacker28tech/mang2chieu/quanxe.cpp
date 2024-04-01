#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, s, t, a[105][105], dem = 0;
void loang(int i, int j)
{
    a[i][j] = 1;
    for (int k = 0; k < 4; k++)
    {
        int xx = i + dx[k], yy = j + dy[k];
        if (xx >= 0 && yy >= 0 && xx < n && yy < n && a[xx][yy] == 0)
        {
            dem++;
            loang(xx, yy);
        }
    }
}
int main()
{
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    loang(s - 1, t - 1);
    cout << dem + 1 << endl;
}