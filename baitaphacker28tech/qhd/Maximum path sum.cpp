#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        b[i][1] = a[i][1];
    }
    for (int j = 2; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                b[i][j] = max(b[i][j - 1] + a[i][j], b[i + 1][j - 1] + a[i][j]);
            }
            else if (i == n)
            {
                b[i][j] = max(b[i][j - 1] + a[i][j], b[i - 1][j - 1] + a[i][j]);
            }
            else
            {
                b[i][j] = max(b[i][j - 1] + a[i][j], max(b[i + 1][j - 1] + a[i][j], b[i - 1][j - 1] + a[i][j]));
            }
        }
    }
    int maxo = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        maxo = max(maxo, b[i][n]);
    }
    cout << maxo << endl;
}