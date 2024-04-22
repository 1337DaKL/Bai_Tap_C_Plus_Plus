#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ok = 1e9 + 7;
ll Try(ll n, ll m)
{
    if (m == 1)
    {
        return n;
    }
    ll X = Try(n, m / 2);
    if (m % 2 == 0)
    {
        return (X % ok * X % ok) % ok;
    }
    else
    {
        return ((X % ok * X % ok) % ok * n) % ok;
    }
}
int main()
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