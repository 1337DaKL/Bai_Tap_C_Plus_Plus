#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        sort(a, a + n);
        sort(b, b + n, greater<ll>());
        ll tong = 0;
        for (int i = 0; i < n; i++)
        {
            tong = tong + a[i] * b[i];
        }
        cout << tong << endl;
    }
}