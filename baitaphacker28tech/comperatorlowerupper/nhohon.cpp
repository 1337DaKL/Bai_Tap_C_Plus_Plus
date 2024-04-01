#include <bits/stdc++.h>
using namespace std;
int ok(int a[], int n, int x)
{
    int pos = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] < x)
        {
            pos = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return n - pos + 1;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    sort(b, b + m);
    for (auto it : a)
    {
        cout << ok(b, m, it) << " ";
    }
}