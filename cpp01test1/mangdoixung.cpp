#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(ll a[], ll n)
{
    unordered_map<ll, ll> mp;
    ll dem = 0;
    for (ll i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if (mp[a[i]] % 2 != 0)
            dem++;
        else
            dem--;
    }
    return dem <= 1;
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (ok(a, n))
        {
            cout << "28tech\n";
        }
        else
            cout << "29tech\n";
    }
}
