#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    int dem = 0;
    int l = 0;
    for (int r = 0; r < n; r++)
    {
        sum += a[r];
        while (sum > m)
        {
            sum -= a[l];
            l++;
        }
        dem = max(dem, r - l + 1);
    }
    cout << dem;
}