#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (auto &it : a)
        cin >> it;
    ll cnt = 0;
    sort(a, a + n);
    ll l = 0, r = n - 1;
    while (l <= r)
    {
        if (a[l] + a[r] <= m)
        {
            cnt++;
            l++;
            r--;
        }
        else
        {
            cnt++;
            r--;
        }
    }
    cout << cnt;
}