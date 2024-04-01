#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        multiset<ll> mp;
        while (n--)
        {
            int x;
            cin >> x;
            mp.insert(x);
        }
        ll dem = 0;
        while (mp.size() > 1)
        {
            ll tong = 0;
            auto it = mp.begin();
            tong += *it;
            mp.erase(it);
            auto itt = mp.begin();
            tong += *itt;
            mp.erase(itt);
            mp.insert(tong);
            dem += tong;
        }
        cout << dem << endl;
    }
}