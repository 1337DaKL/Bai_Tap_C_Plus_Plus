#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (auto &it : a)
        cin >> it;
    sort(a, a + n, greater<ll>());
    ll dem1 = 0, dem2 = 0;
    ll tong1 = 1, tong2 = 1;
    for (auto it : a)
    {
        dem1++, dem2++;
        if (dem1 <= 2)
            tong1 *= it;
        if (dem2 <= 3)
            tong2 *= it;
    }
    sort(a, a + n);
    for (auto it : a)
        cout << it << " ";
    ll dem3 = 0, dem4 = 0;
    ll tong3 = 1, tong4 = 1;
    for (auto it : a)
    {
        dem3++, dem4++;
        if (dem3 <= 2)
            tong3 *= it;
        if (dem4 <= 3)
            tong4 *= it;
    }
    cout << max(max(tong1, tong2), max(tong3, tong4)) << endl;
}