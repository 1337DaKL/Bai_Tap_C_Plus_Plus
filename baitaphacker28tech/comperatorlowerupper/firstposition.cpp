#include <bits/stdc++.h>
using namespace std;
int seachfirstx(int a[], int n, int m)
{
    int pos = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == m)
        {
            pos = mid;
            r = mid - 1;
        }
        else if (a[mid] > m)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
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
    cout << seachfirstx(a, n, m) << endl;
}