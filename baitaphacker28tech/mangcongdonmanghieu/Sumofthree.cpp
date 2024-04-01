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
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            if (a[l] + a[r] == m - a[i])
            {
                cout << "YES" << endl;
                return 0;
            }
            else if (a[l] + a[r] < m - a[i])
            {
                l++;
            }
            else
                r--;
        }
    }
    cout << "NO";
}