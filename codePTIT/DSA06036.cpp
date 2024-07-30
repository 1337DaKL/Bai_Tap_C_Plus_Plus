#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (auto &it : a)
        {
            cin >> it;
        }
        sort(a, a + n);
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                ll ok = k - a[i] - a[j];
                if (binary_search(a + j + 1, a + n + 1, ok))
                {
                    check = true;
                    break;
                }
            }
        }
        if (check)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}