#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005], b[1000005], c[1000005];
int main()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
            b[i] = a[i];
        else
            b[i] = a[i] - a[i - 1];
    }
    while (m--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        b[x] += z;
        b[y + 1] -= z;
    }
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
            c[i] = b[i];
        else
            c[i] = b[i] + c[i - 1];
    }
    for (ll i = 0; i < n; i++)
    {
        cout << c[i] << ' ';
    }
}