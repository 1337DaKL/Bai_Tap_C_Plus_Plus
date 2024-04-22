#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll Try(ll n, ll k)
{
    if (k == 1)
    {
        return n;
    }
    ll X = Try(n, k / 2);
    if (k % 2 == 0)
    {
        return (X % mod * X % mod) % mod;
    }
    else
    {
        return ((X % mod * X % mod) % mod * n) % mod;
    }
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll m = n;
        ll mm = 0;
        while (m)
        {
            mm = mm * 10 + m % 10;
            m /= 10;
        }
        cout << Try(n, mm) << endl;
    }
}