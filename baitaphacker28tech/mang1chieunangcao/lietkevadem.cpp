#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(ll n)
{
    string s = to_string(n);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] > s[i])
            return false;
    }
    return true;
}
bool sapxep(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    ll n;
    vector<pair<ll, ll>> mp;
    map<ll, ll> mpp;
    while (cin >> n)
    {
        if (ok(n))
        {
            mpp[n]++;
        }
    }
    for (auto it : mpp)
    {
        mp.push_back({it.first, it.second});
    }
    sort(mp.begin(), mp.end(), sapxep);
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}