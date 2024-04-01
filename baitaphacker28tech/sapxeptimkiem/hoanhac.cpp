#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    map<ll, ll> mp;
    multiset<ll> ok;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ok.insert(a[i]);
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int j = 0; j < m; j++)
    {
        auto it = ok.upper_bound(b[j]);
        if (it != ok.begin())
        {
            it--;
            auto oki = ok.find(*it);
            if (oki != ok.end())
            {
                cout << *oki << endl;
                ok.erase(oki);
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
