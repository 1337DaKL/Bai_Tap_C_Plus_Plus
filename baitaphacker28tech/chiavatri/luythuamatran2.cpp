#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll n;
struct matran
{
    ll a[20][20];
    friend matran operator*(matran x, matran y)
    {
        matran kq;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                kq.a[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    kq.a[i][j] += x.a[i][k] * y.a[k][j];
                    kq.a[i][j] %= mod;
                }
            }
        }
        return kq;
    }
};
matran Try(matran x, ll k)
{
    if (k == 1)
    {
        return x;
    }
    matran X = Try(x, k / 2);
    if (k % 2 == 0)
    {
        return X * X;
    }
    else
    {
        return X * X * x;
    }
}
int main()
{
    ll k;
    cin >> n >> k;
    matran x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x.a[i][j];
        }
    }
    matran kq = Try(x, k);
    ll tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong = (tong % mod + kq.a[i][n - 1] % mod) % mod;
    }
    cout << tong << endl;
    return 0;
}