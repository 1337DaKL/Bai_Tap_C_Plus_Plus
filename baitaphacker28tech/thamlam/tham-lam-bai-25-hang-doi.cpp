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
    sort(a, a + n);
    ll ans = 0, tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= tong)
        {
            ans++;
            tong += a[i];
        }
    }
    cout << ans << endl;
}