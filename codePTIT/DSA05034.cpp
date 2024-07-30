#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int f[n + 1] = {0};
        f[0] = 1, f[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j <= min(i, k); j++)
            {
                f[i] = (f[i] % mod + f[i - j] % mod) % mod;
            }
        }
        cout << f[n] << endl;
    }
}