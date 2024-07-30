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
    ll mino[n];
    mino[0] = 0;
    mino[1] = abs(a[1] - a[0]);
    for (int i = 2; i < n; i++)
    {
        mino[i] = min(mino[i - 2] + abs(a[i] - a[i - 2]), mino[i - 1] + abs(a[i] - a[i - 1]));
    }
    cout << mino[n - 1] << endl;
}