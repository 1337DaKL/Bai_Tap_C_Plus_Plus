#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    ll a[n + 2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n] = 0, a[n + 1] = m;
    sort(a, a + n + 2);
    ll maxo = INT_MIN;
    for (int i = 1; i < n + 2; i++)
    {
        maxo = max(maxo, abs(a[i] - a[i - 1]));
    }
    double ok = (double)maxo / 2;
    cout << fixed << setprecision(10) << ok << endl;
}