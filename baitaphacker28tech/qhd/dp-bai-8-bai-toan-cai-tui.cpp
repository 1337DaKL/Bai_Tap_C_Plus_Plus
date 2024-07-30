#include <bits/stdc++.h>
using namespace std;
int n, s, f[1005][1005], w[1005], v[10005];
int main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            f[i][j] = f[i - 1][j];
            if (j >= w[i])
            {
                f[i][j] = max(f[i - 1][j - w[i]] + v[i], f[i][j]);
            }
        }
    }
    cout << f[n][s];
}