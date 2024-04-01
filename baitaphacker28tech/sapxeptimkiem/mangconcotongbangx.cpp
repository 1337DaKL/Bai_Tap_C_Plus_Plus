#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int dem = 0;
    ll l = 0, r = 0, tong = 0;
    for (ll i = 0; i < n; i++)
    {
        tong += a[i];
        if (tong == m)
        {
            dem++;
        }
        while (tong > m)
        {
            tong -= a[l];
            if (tong == m)
                dem++;
            l++;
        }
    }
    cout << dem << endl;
}