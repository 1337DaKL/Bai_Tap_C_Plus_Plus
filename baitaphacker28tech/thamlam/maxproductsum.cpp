#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ok = 1e9 + 7;
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong = (tong % ok + (a[i] % ok * i % ok) % ok) % ok;
    }
    cout << tong;
}