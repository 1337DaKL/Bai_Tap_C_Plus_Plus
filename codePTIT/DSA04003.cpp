#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 123456789;
ll Try(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 2;
    }
    ll X = Try(n / 2);
    if (n % 2 == 0)
    {
        return (X % mod * X % mod) % mod;
    }
    else
    {
        return ((X % mod * X % mod) % mod * 2) % mod;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        cout << Try(n - 1) << endl;
    }
}