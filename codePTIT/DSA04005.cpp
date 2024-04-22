#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fb[100];
char Try(ll n, ll k)
{
    if (n == 1)
    {
        return 'A';
    }
    if (n == 2)
    {
        return 'B';
    }
    if (k <= fb[n - 2])
    {
        return Try(n - 2, k);
    }
    else
    {
        return Try(n - 1, k - fb[n - 2]);
    }
}
int main()
{
    fb[1] = 1, fb[2] = 1;
    for (ll i = 3; i <= 99; i++)
    {
        fb[i] = fb[i - 2] + fb[i - 1];
    }
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, k;
        cin >> n >> k;
        cout << Try(n, k) << endl;
    }
}
