#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ok(ll a, ll b)
{
    return abs(a) < abs(b);
}
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (auto &it : a)
        cin >> it;
    stable_sort(a, a + n, ok);
    for (auto it : a)
        cout << it << " ";
}