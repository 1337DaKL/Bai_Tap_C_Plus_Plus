#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fb[100];
char Try(ll n, ll k)
{
    if (n == 1)
    {
        return '0';
    }
    if (n == 2)
    {
        return '1';
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
    for (int i = 3; i < 100; i++)
    {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
    int test;
    cin >> test;
    while (test--)
    {
        ll n, k;
        cin >> n >> k;
        cout << Try(n, k) << endl;
    }
}