#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll k;
        map<char, ll> mpp;
        cin >> k;
        string s;
        cin >> s;
        for (auto it : s)
        {
            mpp[it]++;
        }
        priority_queue<ll> mp;
        for (auto it : mpp)
        {
            mp.push(it.second);
        }
        while (k--)
        {
            ll x = mp.top();
            x--;
            mp.pop();
            if (x != 0)
            {
                mp.push(x);
            }
            if (mp.size() == 0)
            {
                break;
            }
        }
        ll tong = 0;
        while (mp.size() != 0)
        {
            ll x = mp.top();
            mp.pop();
            tong += pow(x, 2);
        }
        cout << tong << endl;
    }
}