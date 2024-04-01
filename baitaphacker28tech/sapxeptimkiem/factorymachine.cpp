#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005], n, m;
ll tg(ll n)
{
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += n / a[i];
    }
    return cnt;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 1ll * m * (*min_element(a, a + n));
    ll luu = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (tg(mid) >= m)
        {
            luu = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << luu << endl;
}