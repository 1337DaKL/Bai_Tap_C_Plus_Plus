#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, m, a[100000000];
bool ok(ll i)
{
    int tong = 0, dem = 0;
    for (int j = 0; j < n; j++)
    {
        tong += a[j];
        if (tong > i)
        {
            dem++;
            tong = a[i];
        }
    }
    dem++;
    return dem <= m;
}
int main()
{
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = *max_element(a, a + n), r = 0;
    for (int i = 0; i < n; i++)
    {
        r += a[i];
    }
    ll cnt = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (ok(mid))
        {
            cnt = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << cnt;
}