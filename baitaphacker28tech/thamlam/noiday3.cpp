#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> mp;
    ll ok = 1e9 + 7;
    ll tong = 0;
    while (n--)
    {
        ll x;
        cin >> x;
        mp.push(x);
    }
    while (mp.size() != 1)
    {
        ll x = mp.top();
        mp.pop();
        ll y = mp.top();
        mp.pop();
        tong = (tong % ok + (x + y) % ok) % ok;
        mp.push(x + y);
    }
    cout << tong << endl;
}