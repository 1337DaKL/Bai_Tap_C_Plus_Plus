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
        return (X * X) % mod;
    }
    else
    {
        return ((X * X) % mod * n) % mod;
    }
}
int main()
{
    ll a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        else
            cout << Try(a, b) << endl;
    }
    return 0;
}