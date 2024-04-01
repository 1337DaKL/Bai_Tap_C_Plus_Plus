#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int res = -1;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] <= b[i])
            {
                l = mid + 1;
            }
            else
            {
                res = mid;
                r = mid - 1;
            }
        }
        if (res == -1)
        {
            cout << "_ ";
        }
        else
        {
            cout << a[res] << " ";
        }
    }
}