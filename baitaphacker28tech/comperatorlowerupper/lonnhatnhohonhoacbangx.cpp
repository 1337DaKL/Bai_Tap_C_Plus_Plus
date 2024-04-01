#include <bits/stdc++.h>
using namespace std;
int ok(int a[], int n, int x)
{
    int pos = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] <= x)
        {
            l = mid + 1;
            pos = a[mid];
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
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
        cin >> it;
    if (ok(a, n, m) != -1)
        cout << ok(a, n, m) << endl;
    else
        cout << "NOT FOUND";
}