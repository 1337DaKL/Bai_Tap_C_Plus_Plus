#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
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
            bool ok = true;
            for (int k = 0; k < 8; k++)
            {
                int xx = i + dx[k];
                int yy = j + dy[k];
                if (xx >= 0 && xx < n && yy >= 0 && yy < m && a[i][j] <= a[xx][yy])
                    ok = false;
            }
            if (ok)
                dem++;
        }
    }
    cout << dem << endl;
}