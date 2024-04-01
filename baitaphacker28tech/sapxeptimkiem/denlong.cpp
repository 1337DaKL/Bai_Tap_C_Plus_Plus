#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    double maxo = max(a[0] - 0, m - a[n - 1]);
    for (int i = 1; i < n; i++)
    {
        maxo = max(maxo, (a[i] - a[i - 1]) / 2);
    }
    cout << fixed << setprecision(10) << maxo << endl;
}