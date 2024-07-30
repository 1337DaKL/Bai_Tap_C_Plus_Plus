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
            cin >> it;
        int f[n];
        f[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            f[i] = a[i];
            for (int j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    f[i] = max(f[i], f[j] + a[i]);
                }
            }
        }
        cout << *max_element(f, f + n) << endl;
    }
}