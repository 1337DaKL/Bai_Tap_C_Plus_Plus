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
        ll a[n];
        for (auto &it : a)
        {
            cin >> it;
        }
        sort(a, a + n);
        ll mino = LLONG_MAX;
        for (ll i = 1; i < n; i++)
        {
            mino = min(mino, a[i] - a[i - 1]);
        }
        cout << mino << endl;
    }
}