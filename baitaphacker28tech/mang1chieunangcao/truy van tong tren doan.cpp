#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10000000], b[10000000];
int main()
{
    ll n, test;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            b[i] = a[i];
        }
        else
        {
            b[i] = b[i - 1] + a[i];
        }
    }
    cin >> test;
    while (test--)
    {
        ll l, r;
        cin >> l >> r;
        if (l == 0 && r == 0)
        {
            cout << b[0];
        }
        else
        {
            cout << b[r - 1] - b[l - 2] << endl;
        }
    }
}