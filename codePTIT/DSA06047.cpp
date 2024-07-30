#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (auto &it : a)
        {
            ll x;
            cin >> x;
            it = pow(x, 2);
        }
        sort(a, a + n);
        bool check = true;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (binary_search(a + j + 1, a + n, a[i] + a[j]))
                {
                    cout << "YES\n";
                    check = false;
                    break;
                }
            }
            if (check == false)
                break;
        }
        if (check)
        {
            cout << "NO\n";
        }
    }
}