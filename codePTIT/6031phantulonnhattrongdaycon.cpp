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
        {
            cin >> it;
        }
        ll l = 0, r = m - 1;
        while (l < n && r < n)
        {
            cout << *max_element(a + l, a + r + 1) << " ";
            l++;
            r++;
        }
        cout << endl;
    }
}