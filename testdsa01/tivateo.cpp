#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for (auto &it : a)
    {
        cin >> it;
        mp[it]++;
    }
    sort(a, a + n);
    if (a[0] != a[n - 1])
    {
        cout << a[n - 1] - a[0] << endl
             << mp[a[n - 1]] * mp[a[0]] << endl;
    }
    else
    {
        ll dem = n * (n - 1) / 2;
        cout << 0 << endl
             << dem;
    }
    return 0;
}
