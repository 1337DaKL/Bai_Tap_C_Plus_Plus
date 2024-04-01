#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (auto &it : a)
            cin >> it;
        sort(a, a + n);
        ll dem = 0;
        for (ll i = 0; i < n; i++)
        {
            dem += upper_bound(a + i + 1, a + n, k - a[i]) - lower_bound(a + i + 1, a + n, k - a[i]);
        }
        cout << dem << endl;
    }
}