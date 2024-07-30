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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int f[n + 1] = {0};
        f[1] = a[1];
        for (int i = 2; i <= n; i++)
        {
            f[i] = max(f[i - 1], f[i - 2] + a[i]);
        }
        cout << *max_element(f + 1, f + n + 1) << endl;
    }
}