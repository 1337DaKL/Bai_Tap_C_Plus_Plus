#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll b[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                b[i][j] = a[i][j];
            }
            else if (i == 0)
            {
                b[i][j] = b[i][j - 1] + a[i][j];
            }
            else if (j == 0)
            {
                b[i][j] = b[i - 1][j] + a[i][j];
            }
            else
            {
                b[i][j] = max(b[i - 1][j], b[i][j - 1]);
                b[i][j] += a[i][j];
            }
        }
    }
    cout << b[n - 1][m - 1] << endl;
}