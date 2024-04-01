#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;
    multiset<ll> mp;
    ll a[n], b[m];
    for (auto &it : a)
    {
        cin >> it;
        mp.insert(it);
    }
    for (auto &it : b)
    {
        cin >> it;
        mp.insert(it);
    }
    for (auto it : mp)
        cout << it << " ";
}