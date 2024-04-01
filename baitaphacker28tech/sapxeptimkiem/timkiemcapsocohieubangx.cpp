#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int x = a[i] - m;
        int y = a[i] + m;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                cout << 1 << endl;
                return 0;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
    cout << -1 << endl;
}