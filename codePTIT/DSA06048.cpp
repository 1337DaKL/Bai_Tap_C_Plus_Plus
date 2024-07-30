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
        int a[n];
        for (auto &it : a)
        {
            cin >> it;
        }
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}