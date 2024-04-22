#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll slove(ll nn, ll kk)
{
    if (kk == 1)
    {
        return nn;
    }
    ll X = slove(nn, kk / 2);
    if (kk % 2 == 0)
    {
        return (X % mod * X % mod) % mod;
    }
    else
        return ((X % mod * X % mod) % mod * nn) % mod;
}
int main()
{
    ll n, k;
    cin >> n >> k;
    cout << slove(n, k) << endl;
}