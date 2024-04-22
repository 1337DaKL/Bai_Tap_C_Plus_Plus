#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ok = 1e9 + 7;
int main()
{
    ll n;
    cin >> n;
    priority_queue<ll> mp;
    while (n--)
    {
        ll x;
        cin >> x;
        mp.push(x);
    }
    ll tong = 0;
    while (mp.size() != 1)
    {
        ll x = mp.top();
        mp.pop();
        ll y = mp.top();
        mp.pop();
        tong = (tong % ok + (x + y) % ok) % ok;
        mp.push(x + y);
    }
    cout << tong;
}