#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    ll tong[n];
    tong[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        tong[i] = tong[i - 1] + a[i];
    }
    ll test;
    cin >> test;
    while (test--)
    {
        ll l, r;
        cin >> l >> r;
        if (l == 1)
        {
            cout << tong[r - 1] << endl;
        }
        else
        {
            cout << tong[r - 1] - tong[l - 1 - 1] << endl;
        }
    }
}