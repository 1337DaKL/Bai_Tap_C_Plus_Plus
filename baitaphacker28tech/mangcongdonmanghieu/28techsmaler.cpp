#include <bits/stdc++.h>
using namespace std;
int okk(int a[], int n, int x)
{
    int ok = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            ok = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ok;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }
    for (auto it : b)
    {
        if (okk(a, n, it) == -1)
        {
            cout << n << " ";
        }
        else
        {
            cout << okk(a, n, it) << " ";
        }
    }
}