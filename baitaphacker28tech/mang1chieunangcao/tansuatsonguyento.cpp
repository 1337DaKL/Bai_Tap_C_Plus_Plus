#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}
int main()
{
    int n;
    map<ll, ll> mp;
    vector<ll> ok;
    while (cin >> n)
    {
        if (check(n))
        {
            mp[n]++;
            ok.push_back(n);
        }
    }
    for (auto it : ok)
    {
        if (mp[it] != 0)
        {
            cout << it << " " << mp[it] << endl;
            mp[it] = 0;
        }
    }
}