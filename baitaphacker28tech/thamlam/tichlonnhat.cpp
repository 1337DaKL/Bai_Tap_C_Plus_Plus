#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll tong1 = a[n - 1] * a[n - 2];
    ll tong2 = a[0] * a[1];
    ll tong3 = a[0] * a[1] * a[n - 1];
    ll tong4 = a[n - 1] * a[n - 2] * a[n - 3];
    cout << max(max(tong1, tong2), max(tong3, tong4));
}