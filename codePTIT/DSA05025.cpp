#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        long long f[n + 1] = {0};
        f[0] = 1, f[1] = 1;
        for (long long i = 2; i <= n; i++)
        {
            for (long long j = 1; j <= min(i, (long long)3); j++)
            {
                f[i] = f[i] + f[i - j];
            }
        }
        cout << f[n] << endl;
    }
}