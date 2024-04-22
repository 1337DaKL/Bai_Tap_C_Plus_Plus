#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ok = 1e9 + 7;
ll Try(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 2;
    }
    ll X = Try(n / 2);
    if (n % 2 == 0)
    {
        return (X % ok * X % ok) % ok;
    }
    else
    {
        return ((X % ok * X % ok) % ok * 2) % ok;
    }
}
int main()
{
    ll n;
    cin >> n;
    cout << Try(n - 1) << endl;
}