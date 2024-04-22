#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Try(ll n, ll k)
{
    if (k == pow(2, n - 1))
    {
        return n;
    }
    if (k < pow(2, n - 1))
    {
        return Try(n - 1, k);
    }
    return Try(n - 1, k - pow(2, n - 1));
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n, k;
        cin >> n >> k;
        cout << Try(n, k) << endl;
    }
}