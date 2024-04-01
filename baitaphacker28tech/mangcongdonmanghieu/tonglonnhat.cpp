#include <bits/stdc++.h>
using namespace std;
long long a[10000005], b[1000005], c[1000005];
int main()
{
    long long n, m;
    cin >> n >> m;
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (m--)
    {
        long long l, r;
        cin >> l >> r;
        b[l] += 1;
        b[r + 1] -= 1;
    }
    for (long long i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            c[i] = b[i];
        }
        else
        {
            c[i] = b[i] + c[i - 1];
        }
    }
    sort(a + 1, a + n + 1, greater<long long>());
    sort(c + 1, c + n + 1, greater<long long>());
    long long tong = 0;
    for (long long i = 1; i <= n; i++)
    {
        tong += 1ll * a[i] * c[i];
    }
    cout << tong << endl;
}