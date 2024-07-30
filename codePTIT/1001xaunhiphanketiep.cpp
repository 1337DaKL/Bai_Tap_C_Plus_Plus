#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        int b[n + 1][m + 1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (i == 1 && j == 1)
                {
                    b[i][j] = a[i][j];
                }
                else if (i == 1)
                {
                    b[i][j] = a[i][j] + b[i][j - 1];
                }
                else if (j == 1)
                {
                    b[i][j] = a[i][j] + b[i - 1][j];
                }
                else
                {
                    b[i][j] = a[i][j] + min(b[i - 1][j - 1], min(b[i - 1][j], b[i][j - 1]));
                }
            }
        }
        cout << b[n][m] << endl;
    }
}