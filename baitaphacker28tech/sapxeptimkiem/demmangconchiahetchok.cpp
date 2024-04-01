#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    map<ll, ll> mp;
    ll dem = 0, tong = 0;
    for (ll i = 0; i < n; i++)
    {
        tong += a[i];
        if (tong % k == 0 && mp.count(tong / k))
        {
            dem += mp[tong / k];
        }
        if (tong % k == 0)
        {
            dem++;
        }
        mp[a[i]]++;
    }
    cout << dem << endl;
}