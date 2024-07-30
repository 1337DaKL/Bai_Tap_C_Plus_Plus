#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int cnt = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (m > a[i])
        {
            cnt++;
            m -= a[i];
        }
    }
    cout << cnt << endl;
}