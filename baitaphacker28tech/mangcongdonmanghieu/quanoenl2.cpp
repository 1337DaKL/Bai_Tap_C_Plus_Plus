#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    ll cnt = INT_MAX;
    ll l = 0, tong = 0;
    for (ll r = 0; r < n; r++)
    {
        tong += a[r];
        if (tong >= s)
        {
            cnt = min(cnt, r - l + 1);
            tong -= a[l];
            l++;
        }
    }
    if (cnt == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
        cout << cnt << endl;
}