#include <bits/stdc++.h>
using namespace std;

const long long ok = 1000000000 + 7;

long long power_mod(long long base, long long exp, long long mod)
{
    long long result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % mod;
        exp >>= 1;
        base = (base * base) % mod;
    }
    return result;
}

int main()
{
    long long n;
    cin >> n;
    long long a[n], b[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }
    long long tong = 0;
    for (long long i = 0; i < n; i++)
    {
        tong = (tong % ok + power_mod(a[i], b[i], ok)) % ok;
    }
    cout << tong;
    return 0;
}
