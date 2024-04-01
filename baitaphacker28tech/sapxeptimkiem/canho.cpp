#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n], b[m];
    for (ll &it : a)
    {
        cin >> it;
    }
    for (ll &it : b)
    {
        cin >> it;
    }
    sort(a, a + n);
    sort(b, b + m);
    ll c[n], d[n];
    for (ll i = 0; i < m; i++)
    {
        c[i] = b[i] - k;
        d[i] = b[i] + k;
    }
    ll cnt = 0, i = 0, j = 0;
    while (i < n && j < n)
    {
        if (a[i] >= c[j] && a[i] <= d[j])
        {
            cnt++;
            i++;
            j++;
        }
        else if (a[i] < c[j])
        {
            i++;
        }
        else if (a[i] > d[j])
        {
            j++;
        }
    }
    cout << cnt;
}