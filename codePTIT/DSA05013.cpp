#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, k;
        cin >> n >> k;
        long long f[n + 1] = {0};
        f[0] = 1, f[1] = 1;
        for (long long i = 2; i <= n; i++)
        {
            for (long long j = 1; j <= min(i, k); j++)
            {
                f[i] = (f[i] % mod + f[i - j] % mod) % mod;
            }
        }
        cout << f[n] << endl;
    }
}