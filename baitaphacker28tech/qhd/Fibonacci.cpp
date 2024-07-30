#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll fb[1000005];
int main()
{
    fb[0] = 0, fb[1] = 0, fb[2] = 1;
    for (int i = 3; i < 1000005; i++)
    {
        fb[i] = (fb[i - 1] % mod + (fb[i - 2] % mod + fb[i - 3] % mod) % mod) % mod;
    }
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        cout << fb[n] << endl;
    }
}