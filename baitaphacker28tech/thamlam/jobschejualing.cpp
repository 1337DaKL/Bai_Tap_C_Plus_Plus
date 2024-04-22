#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}
int main()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> mp;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        mp.push_back({x, y});
    }
    sort(mp.begin(), mp.end(), ok);
    ll nho = LLONG_MIN;
    ll dem = 0;
    for (auto it : mp)
    {
        if (it.first > nho)
        {
            dem++;
            nho = it.second;
        }
    }
    cout << dem << endl;
}