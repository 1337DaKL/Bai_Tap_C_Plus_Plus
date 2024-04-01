#include <bits/stdc++.h>
using namespace std;
int n;
int a[105][105], b[105][105];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (j == 0)
            {
                b[i][j] = a[i][j];
            }
            else if (i == 0)
            {
                b[i][j] = a[i][j] + max(b[i][j - 1], b[i + 1][j - 1]);
            }
            else if (i == n - 1)
            {
                b[i][j] = a[i][j] + max(b[i][j - 1], b[i - 1][j - 1]);
            }
            else
            {
                b[i][j] = a[i][j] + max(max(b[i][j - 1], b[i - 1][j - 1]), b[i + 1][j - 1]);
            }
        }
    }
    int maxo = INT_MIN;
    for (int j = 0; j < n; j++)
    {
        maxo = max(maxo, b[j][n - 1]);
    }
    cout << maxo << endl;
}