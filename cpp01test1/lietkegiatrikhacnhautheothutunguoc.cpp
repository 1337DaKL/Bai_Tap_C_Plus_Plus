#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    set<ll> mp;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
        mp.insert(it);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp.find(a[i]) != mp.end())
        {
            cout << a[i] << " ";
            mp.erase(a[i]);
        }
    }
}