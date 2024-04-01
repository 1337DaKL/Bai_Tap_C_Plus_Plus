#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ok = 1000000000 + 7;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        vector<ll> mp;
        while (n--)
        {
            ll x;
            cin >> x;
            mp.push_back(x);
        }
        ll chiphi = 0;
        while (mp.size() > 1)
        {
            sort(mp.begin(), mp.end());
            auto it = mp.begin();
            ll tong = 0;
            tong = (tong % ok + (*it) % ok) % ok;
            mp.erase(it);
            auto itt = mp.begin();
            tong = (tong % ok + (*itt) % ok) % ok;
            mp.erase(itt);
            mp.push_back(tong);
            chiphi = (chiphi % ok + tong % ok) % ok;
        }
        cout << chiphi << endl;
    }
}