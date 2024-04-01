#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

    ll n;
    cin >> n;
    ll i = 9;
    ll k = 0;
    while (n)
    {
        ll b = n / a[i];
        k += b;
        n = n - b * a[i];
        i--;
    }
    cout << k << endl;
}