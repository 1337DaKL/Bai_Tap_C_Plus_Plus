#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
        cin >> it;
    bool ok = true;
    sort(a, a + n);
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] + a[r] == m)
        {
            cout << "YES" << endl;
            ok = false;
            break;
        }
        else if (a[l] + a[r] < m)
        {
            l++;
        }
        else
            r--;
    }
    if (ok)
        cout << "NO" << endl;
}