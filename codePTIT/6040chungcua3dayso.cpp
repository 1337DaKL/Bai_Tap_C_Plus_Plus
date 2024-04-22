#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        set<ll> aa, bb, cc;
        while (a--)
        {
            ll x;
            cin >> x;
            aa.insert(x);
        }
        while (b--)
        {
            ll x;
            cin >> x;
            bb.insert(x);
        }
        while (c--)
        {
            ll x;
            cin >> x;
            cc.insert(x);
        }
        multiset<ll> ok;
        for (auto it : aa)
        {
            auto ittt = bb.find(it);
            auto itt = cc.find(it);
            if (ittt != bb.end() && itt != cc.end())
            {
                ok.insert(it);
                bb.erase(ittt);
                cc.erase(itt);
            }
        }
        if (ok.size() != 0)
        {
            for (auto it : ok)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}