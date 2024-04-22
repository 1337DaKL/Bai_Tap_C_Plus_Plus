#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ok = 1e9 + 7;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> mp;
        ll tong = 0;
        while (n--)
        {
            ll x;
            cin >> x;
            mp.push(x);
        }
        while (mp.size() > 1)
        {
            ll x = mp.top();
            mp.pop();
            ll y = mp.top();
            mp.pop();
            tong = (tong % ok + (x % ok + y % ok) % ok) % ok;
            mp.push((x % ok + y % ok) % ok);
        }
        cout << tong << endl;
    }
}