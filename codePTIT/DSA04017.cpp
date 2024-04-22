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
        ll a[n], b[n - 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != b[i])
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}