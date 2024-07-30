#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int f[s + 1] = {0};
        f[0] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = s; j >= a[i]; j--)
            {
                if (f[j - a[i]])
                {
                    f[j] = 1;
                }
            }
        }
        if (f[s])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}