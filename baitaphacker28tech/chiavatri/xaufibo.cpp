#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fb[1000];
char Try(ll n, ll m)
{
    if (n == 1)
    {
        return 'A';
    }
    if (n == 2)
    {
        return 'B';
    }
    if (m <= fb[n - 2])
    {
        return Try(n - 2, m);
    }
    else
    {
        return Try(n - 1, m - fb[n - 2]);
    }
}
int main()
{
    fb[1] = 1;
    fb[2] = 1;
    for (int i = 3; i <= 100; i++)
    {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
    int n, m;
    cin >> n >> m;
    cout << Try(n, m) << endl;
}