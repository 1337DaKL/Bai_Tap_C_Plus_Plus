#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n];
        for (auto &it : a)
            cin >> it;
        sort(a, a + n);
        ll tong = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                tong += lower_bound(a + j + 1, a + n, m - a[i] - a[j]) - (a + j + 1);
            }
        }
        cout << tong << endl;
    }
}
