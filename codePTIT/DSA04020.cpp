#include <bits/stdc++.h>
using namespace std;
int Try(int a[], int n, int k)
{
    int res = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == k)
        {
            return res = mid + 1;
        }
        else if (a[mid] < k)
        {
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
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int res = Try(a, n, k);
        if (res != -1)
        {
            cout << res << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}