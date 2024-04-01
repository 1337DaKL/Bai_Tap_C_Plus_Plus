#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a, a + n);
    long long dem = 0;
    for (int i = 0; i < n; i++)
    {
        int ok = m - a[i];
        dem += (lower_bound(a + i + 1, a + n, ok) - (a + i + 1));
    }
    cout << dem;
}