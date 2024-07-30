#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, v;
        cin >> n >> v;
        int a[n + 1], b[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        int f[n + 1][v + 1];
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                f[i][j] = f[i - 1][j];
                if (j >= a[i])
                {
                    f[i][j] = max(f[i][j], f[i - 1][j - a[i]] + b[i]);
                }
            }
        }
        cout << f[n][v] << endl;
    }
}