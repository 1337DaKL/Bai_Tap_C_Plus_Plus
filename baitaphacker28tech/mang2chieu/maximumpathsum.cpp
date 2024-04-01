#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[105][105], f[105][105];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                f[i][j] = a[i][j];
            }
            else if (i == 0)
            {
                f[i][j] = a[i][j] + f[i][j - 1];
            }
            else if (j == 0)
            {
                f[i][j] = a[i][j] + f[i - 1][j];
            }
            else
            {
                f[i][j] = max(f[i][j - 1], f[i - 1][j]) + a[i][j];
            }
        }
    }
    cout << f[n - 1][m - 1] << endl;
}