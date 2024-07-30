#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll nt[1000005];
void tdl()
{
    for (int i = 0; i <= 1000000; i++)
    {
        nt[i] = 1;
    }
    nt[0] = 0, nt[1] = 0;
    for (int i = 2; i <= 1000; i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
ll mod = 1e9 + 7;
int main()
{
    tdl();
    ll tich[1000005];
    tich[0] = 0, tich[1] = 0, tich[2] = 2;
    for (int i = 3; i <= 1000000; i++)
    {
        if (nt[i] == 1)
        {
            tich[i] = (i * tich[i - 1] % mod) % mod;
        }
        else
        {
            tich[i] = tich[i - 1] % mod;
        }
    }
    int test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        cout << tich[n] << endl;
    }
}