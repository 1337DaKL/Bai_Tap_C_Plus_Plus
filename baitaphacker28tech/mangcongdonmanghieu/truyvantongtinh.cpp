#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000], b[1000];
int main()
{
    ll n, test;
    cin >> n >> test;
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
    while (test--)
    {
        ll l, r;
        cin >> l >> r;
        cout << b[r - 1] - b[l - 2] << endl;
    }
}