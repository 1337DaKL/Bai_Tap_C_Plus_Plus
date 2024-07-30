#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n], b[m], c[k];
        for (auto &it : a)
        {
            cin >> it;
        }
        for (auto &it : b)
        {
            cin >> it;
        }
        for (auto &it : c)
        {
            cin >> it;
        }
        ll i = 0, j = 0, s = 0;
        vector<ll> mp;
        while (i < n && j < m && s < k)
        {
            if (a[i] == b[j] && b[j] == c[s])
            {
                mp.push_back(a[i]);
                i++, j++, s++;
            }
            else if (a[i] < b[j])
            {
                i++;
            }
            else if (b[j] < c[s])
            {
                j++;
            }
            else
            {
                s++;
            }
        }
        if (mp.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto it : mp)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}