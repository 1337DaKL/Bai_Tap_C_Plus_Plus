#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll tong1 = 0, tong2 = 0, tong3 = 0, tong4 = 0;
    for (int i = 0; i < k; i++)
    {
        tong1 += a[i];
    }
    for (int i = k; i < n; i++)
    {
        tong2 += a[i];
    }
    for (int i = 0; i < n - k; i++)
    {
        tong3 += a[i];
    }
    for (int i = n - k; i < n; i++)
    {
        tong4 += a[i];
    }
    cout << max(abs(tong1 - tong2), abs(tong3 - tong4)) << endl;
}