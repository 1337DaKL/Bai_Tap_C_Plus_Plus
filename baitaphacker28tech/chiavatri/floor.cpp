#include <bits/stdc++.h>
using namespace std;
int Try(int a[], int n, int x)
{
    int res = -1, l = 1, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] <= x)
        {
            res = a[mid];
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << Try(a, n, x) << endl;
}