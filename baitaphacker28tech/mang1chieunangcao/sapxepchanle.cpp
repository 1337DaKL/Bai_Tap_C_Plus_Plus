#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    multiset<ll> le, chan;
    while (n--)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            chan.insert(x);
        }
        else
        {
            le.insert(x);
        }
    }
    for (auto it = le.rbegin(); it != le.rend(); it++)
        cout << *it << " ";
    for (auto it : chan)
        cout << it << " ";
}