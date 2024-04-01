#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ok = 10e9 + 7;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (auto &it : a)
            cin >> it;
        sort(a, a + n);
        ll tong = 0;
        for (ll i = 0; i < n; i++)
        {
            tong = (tong + (a[i] % ok * i % ok) % ok) % ok;
        }
        cout << tong << endl;
    }
}