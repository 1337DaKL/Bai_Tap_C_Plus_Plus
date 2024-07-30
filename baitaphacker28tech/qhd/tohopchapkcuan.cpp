#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
int main()
{
    ll tohop[1005][1005];
    tohop[0][0] = 1, tohop[1][0] = 1, tohop[1][1] = 1;
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                tohop[i][j] = 1;
            }
            else
            {
                tohop[i][j] = (tohop[i - 1][j - 1] % mod + tohop[i - 1][j] % mod) % mod;
            }
        }
    }
    ll test;
    cin >> test;
    while (test--)
    {
        ll k, n;
        cin >> k >> n;
        cout << tohop[k][n] << endl;
    }
}