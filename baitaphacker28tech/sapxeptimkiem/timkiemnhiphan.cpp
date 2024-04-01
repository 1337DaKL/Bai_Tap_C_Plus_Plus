#include <bits/stdc++.h>
using namespace std;
bool ok(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
            return true;
        else if (a[mid] > x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    int test;
    cin >> test;
    while (test--)
    {
        int x;
        cin >> x;
        if (ok(a, n, x))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}