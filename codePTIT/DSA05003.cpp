#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b, c;
        cin >> a >> b >> c;
        a = " " + a, b = " " + b, c = " " + c;
        int f[n + 1][m + 1][k + 1];
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= a.size() - 1; i++)
        {
            for (int j = 1; j <= b.size() - 1; j++)
            {
                for (int t = 1; t <= c.size() - 1; t++)
                {
                    if (a[i] == b[j] && b[j] == c[t])
                    {
                        f[i][j][t] = f[i - 1][j - 1][t - 1] + 1;
                    }
                    else
                    {
                        f[i][j][t] = max(f[i - 1][j][t], max(f[i][j - 1][t], f[i][j][t - 1]));
                    }
                }
            }
        }
        cout << f[n][m][k] << endl;
    }
}