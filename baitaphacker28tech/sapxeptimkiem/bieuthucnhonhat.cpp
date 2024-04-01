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
    sort(a + 1, a + n, greater<int>());
    long long tong = 0;
    for (int i = 0; i <= m; i++)
    {
        tong += a[i];
    }
    for (int i = m + 1; i < n; i++)
    {
        tong -= a[i];
    }
    cout << tong;
}