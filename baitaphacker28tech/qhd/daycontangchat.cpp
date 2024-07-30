#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll fb[1000005];
int main()
{
    fb[1] = 1;
    for (int i = 2; i < 1000005; i++)
    {
        fb[i] = (fb[i - 1] * i) % mod;
    }
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        cout << fb[n] << endl;
    }
}