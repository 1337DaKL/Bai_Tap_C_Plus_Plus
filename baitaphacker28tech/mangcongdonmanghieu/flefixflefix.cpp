#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005], b[1000005], c[1000005];
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll, pair<ll, ll>>> mp;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            b[i] = a[i];
        else
            b[i] = a[i] - a[i - 1];
    }
    while (m--)
    {
        int l, r, d;
        cin >> l >> r >> d;
        mp.push_back({l, {r, d}});
    }
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        for (int i = x - 1; i <= y - 1; i++)
        {
            ll l = mp[i].first, r = mp[i].second.first, d = mp[i].second.second;
            b[l] += d;
            b[r + 1] -= d;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            c[i] = b[i];
        else
            c[i] = b[i] + c[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << c[i] << " ";
    }
}