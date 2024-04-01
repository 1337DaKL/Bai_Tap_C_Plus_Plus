#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    set<ll> mpab;
    map<ll, ll> mpa, mpb;
    while (n--)
    {
        int x;
        cin >> x;
        mpa[x]++;
        mpab.insert(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        mpb[x]++;
        mpab.insert(x);
    }
    for (auto it : mpa)
    {
        if (mpb[it.first] != 0)
        {
            cout << it.first << " ";
        }
    }
    cout << endl;
    for (auto it : mpab)
    {
        cout << it << " ";
    }
}