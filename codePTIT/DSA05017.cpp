#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &it : a)
        {
            cin >> it;
        }
        int ft[n];
        for (int i = 0; i < n; i++)
        {
            ft[i] = a[i];
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    ft[i] = max(ft[i], ft[j] + a[i]);
                }
            }
        }
        int fl[n];
        for (int i = n - 1; i >= 0; i--)
        {
            fl[i] = a[i];
            for (int j = n - 1; j > i; j--)
            {
                if (a[i] > a[j])
                {
                    fl[i] = max(fl[i], fl[j] + a[i]);
                }
            }
        }
        int maxo = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxo = max(ft[i] + fl[i] - a[i], maxo);
        }
        cout << maxo << endl;
    }
}