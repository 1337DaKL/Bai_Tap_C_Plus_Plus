#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tong(ll a)
{
    ll tong = 0;
    while (a)
    {
        tong += a % 10;
        a /= 10;
    }
    return tong;
}
bool ok(ll a, ll b)
{
    if (tong(a) == tong(b))
    {
        return a < b;
    }
    return tong(a) < tong(b);
}
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a, a + n, ok);
    for (auto it : a)
    {
        cout << it << " ";
    }
}