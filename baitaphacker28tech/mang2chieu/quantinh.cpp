#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, -1, 1, 1};
int dy[4] = {-1, 1, -1, 1};
int n, a[105][105];
int dem = 0;
void loang(int i, int j)
{
    a[i][j] = 1;
    dem++;
    for (int k = 0; k < 4; k++)
    {
        int xx = i + dx[k], yy = j + dy[k];
        if (xx >= 0 && yy >= 0 && xx < n && yy < n && a[xx][yy] == 0)
        {
            loang(xx, yy);
        }
    }
}
int main()
{
    int s, t;
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    loang(s, t);
    cout << dem;
}