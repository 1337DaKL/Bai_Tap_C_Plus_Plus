#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0)
            {
                b[i][j] = a[i][j];
            }
            else if (j == 0)
            {
                b[i][j] = max(b[i - 1][j + 1], b[i - 1][j]);
                b[i][j] += a[i][j];
            }
            else if (j == n - 1)
            {
                b[i][j] = max(b[i - 1][j], b[i - 1][j - 1]);
                b[i][j] += a[i][j];
            }
            else
            {
                b[i][j] = max(b[i - 1][j], max(b[i - 1][j - 1], b[i - 1][j + 1]));
                b[i][j] += a[i][j];
            }
        }
    }
    int maxo = INT_MIN;
    for (int j = 0; j < n; j++)
    {
        maxo = max(b[n - 1][j], maxo);
    }
    cout << maxo << endl;
}