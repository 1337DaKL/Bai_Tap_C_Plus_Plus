#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll f[47];
ll sl[47];
void fib()
{
    f[0] = 0;
    f[1] = 1;
    sl[0] = 1;
    sl[1] = 1;
    for (int i = 2; i <= 46; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
        sl[i] = sl[i - 2] + sl[i - 1];
    }
}
ll dem = 0;
void fibo(int n, int k)
{
    if (k == sl[n])
    {
        dem += f[n];
    }
    else if (k <= sl[n - 1])
    {
        fibo(n - 1, k);
    }
    else
    {
        dem += f[n - 1];
        fibo(n - 2, k - sl[n - 1]);
    }
}
int main()
{
    int t;
    cin >> t;
    fib();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        fibo(n, k);
        cout << dem << endl;
        dem = 0;
    }
}