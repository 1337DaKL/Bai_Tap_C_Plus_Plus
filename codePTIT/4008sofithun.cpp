#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long ok = 10e9 + 7;
long long fb[10000005];
void fb1()
{
    fb[0] = 0, fb[1] = 1;
    for (ll i = 2; i <= 100000005; i++)
    {
        fb[i] = (fb[i - 1] % ok + fb[i - 2] % ok) % ok;
    }
}
int main()
{
    int test;
    cin >> test;
    fb1();
    while (test--)
    {
        ll n;
        cin >> n;
        cout << fb[n - 1] << endl;
    }
}