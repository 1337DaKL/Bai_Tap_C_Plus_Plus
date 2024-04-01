#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp.insert(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        mp.insert(x);
    }
    for (auto it : mp)
    {
        cout << it << " ";
    }
}