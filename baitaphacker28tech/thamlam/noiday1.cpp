#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> mp;
    while (n--)
    {
        ll x;
        cin >> x;
        mp.push(x);
    }
    ll tongchi = 0;
    while (mp.size() != 1)
    {
        ll x = mp.top();
        mp.pop();
        ll y = mp.top();
        mp.pop();
        tongchi += x + y;
        mp.push(x + y);
    }
    cout << tongchi << endl;
}