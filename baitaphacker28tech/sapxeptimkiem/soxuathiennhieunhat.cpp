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
    ll maxo = INT_MIN;
    for (auto it : mp)
    {
        maxo = max(maxo, it.second);
    }
    for (auto it : mp)
    {
        if (it.second == maxo)
        {
            cout << it.first << " " << it.second << endl;
            return 0;
        }
    }
}