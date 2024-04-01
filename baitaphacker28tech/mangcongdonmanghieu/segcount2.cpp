#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
        cin >> it;
    int cnt = 0;
    long long tong = 0, l = 0;
    for (int r = 0; r < n; r++)
    {
        tong += a[r];
        while (tong >= m)
        {
            cnt += (n - r);
            tong -= a[l];
            l++;
        }
    }
    cout << cnt;
}