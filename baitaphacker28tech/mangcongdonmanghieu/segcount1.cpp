#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    int tong = 0;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        tong += a[r];
        while (tong > m)
        {
            tong -= a[l];
            l++;
        }
        cnt += (r - l + 1);
    }
    cout << cnt;
}