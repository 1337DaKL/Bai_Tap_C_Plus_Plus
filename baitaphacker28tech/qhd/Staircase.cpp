#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main()
{
    int n, s;
    cin >> n >> s;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int b[s + 1] = {0};
    b[0] = 1;
    for (int i = 1; i <= s; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i] += b[i - a[j]];
            b[i] = b[i] % mod;
        }
    }
    cout << b[s];
}