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
    sort(a, a + n);
    ll mino = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        mino = min(mino, a[i] - a[i - 1]);
    }
    cout << mino << endl;
}