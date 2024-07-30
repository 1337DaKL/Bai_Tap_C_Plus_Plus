#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    ll mino[n];
    mino[0] = 0;
    for (int i = 1; i <= k - 1; i++)
    {
        mino[i] = abs(a[i] - a[0]);
    }
    for (int i = k; i < n; i++)
    {
        mino[i] = LLONG_MAX;
        for (int j = 1; j <= k; j++)
        {
            mino[i] = min(mino[i], mino[i - j] + abs(a[i] - a[i - j]));
        }
    }
    cout << mino[n - 1] << endl;
}