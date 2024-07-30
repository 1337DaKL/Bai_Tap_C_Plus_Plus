#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    ll mino = LLONG_MAX;
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        mino = min(mino, abs(a[i] - a[i - 1]));
    }
    cout << mino << endl;
}