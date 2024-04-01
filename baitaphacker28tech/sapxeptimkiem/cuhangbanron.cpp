#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(pair<ll, ll> a, pair<ll, ll> b)
{
    return abs(a.first - a.second) > abs(b.first - b.second);
}
int main()
{
    vector<pair<ll, ll>> mp;
    int test;
    cin >> test;
    while (test--)
    {
        ll x, y;
        cin >> x >> y;
        mp.push_back({x, y});
    }
    sort(mp.begin(), mp.end(), ok);
    ll nho1 = LLONG_MIN, nho2 = LLONG_MAX;
    ll dem = 0;
    for (auto it : mp)
    {
        if (it.first >= nho1 || it.second <= nho2)
        {
            dem++;
            nho1 = max(nho1, it.first);
            nho2 = min(nho2, it.second);
        }
    }
    cout << dem - 1;
}