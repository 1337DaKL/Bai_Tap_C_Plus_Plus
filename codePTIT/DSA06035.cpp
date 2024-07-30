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
        int b[n];
        b[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                b[i] = b[i - 1] + 1;
            }
            else
            {
                b[i] = 1;
            }
        }
        int c[n];
        c[n - 1] = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                c[i] = c[i + 1] + 1;
            }
            else
            {
                c[i] = 1;
            }
        }
        int maxo = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxo = max(maxo, b[i] + c[i] - 1);
        }
        cout << maxo << endl;
    }
}