#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        for (auto &it : a)
        {
            cin >> it;
        }
        sort(a, a + n);
        int dem = 0;
        int l = 0, r = 1;
        while (l < n && r < n)
        {
            if (a[r] - a[l] < m)
            {
                dem++;
                if (r < n - 1)
                {
                    r++;
                }
                else
                {
                    r++;
                    if (a[r] - a[l] < m)
                    {
                        dem++;
                    }
                    break;
                }
            }
            else
            {
                l++;
                r = l + 1;
            }
        }
        cout << dem << endl;
    }
}