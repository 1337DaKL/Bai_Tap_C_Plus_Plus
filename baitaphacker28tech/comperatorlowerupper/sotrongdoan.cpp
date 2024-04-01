#include <bits/stdc++.h>
using namespace std;
int ok(int a[], int n, int x)
{
    int pos = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            pos = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return pos;
}
int ok1(int a[], int n, int x)
{
    int pos = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] <= x)
        {
            pos = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return pos;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a, a + n);
    int test;
    cin >> test;
    while (test--)
    {
        int x, y;
        cin >> x >> y;
        cout << ok1(a, n, y) - ok(a, n, x) + 1 << endl;
    }
}