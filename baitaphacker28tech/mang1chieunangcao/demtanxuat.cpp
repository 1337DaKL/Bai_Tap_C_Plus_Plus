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
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    for (auto it : a)
    {
        if (mp[it] != 0)
        {
            cout << it << " " << mp[it] << endl;
            mp[it] = 0;
        }
    }
}