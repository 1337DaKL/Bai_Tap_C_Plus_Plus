#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a)
            cin >> x;
        sort(a, a + n);
        long long idx = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < k)
                idx -= a[i];
            else
                idx += a[i];
            if (i < n - k)
                res -= a[i];
            else
                res += a[i];
        }
        cout << max(res, idx) << endl;
    }
    return 0;
}