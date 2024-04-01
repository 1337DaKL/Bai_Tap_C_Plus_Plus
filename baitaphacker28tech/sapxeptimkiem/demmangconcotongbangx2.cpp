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
    ll dem = 0, tong = 0, l = 0, r = 0;
    while (r < n && l < n)
    {
        if (tong == m)
        {
            dem++;
            r++;
        }
        else if (tong < m)
        {
            tong += a[r];
            r++;
        }
        else
        {
            tong -= a[l];
            l++;
        }
    }
    if (tong == m)
        dem++;
    cout << dem;
}