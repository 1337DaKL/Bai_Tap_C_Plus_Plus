#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(ll a[], ll n)
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (a[i] + a[n - i - 1] != a[i - 1] + a[n - (i - 1) - 1])
            return false;
    }
    return true;
}
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    if (ok(a, n))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}