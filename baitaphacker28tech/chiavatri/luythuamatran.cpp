#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
struct matran
{
    ll n;
    ll a[20][20];
    friend matran operator*(matran x, matran y)
    {
        matran kq;
        kq.n = x.n;
        for (int i = 0; i < x.n; i++)
        {
            for (int j = 0; j < x.n; j++)
            {
                kq.a[i][j] = 0;
                for (int k = 0; k < x.n; k++)
                {
                    kq.a[i][j] += x.a[i][k] * y.a[k][j];
                    kq.a[i][j] %= mod;
                }
            }
        }
        return kq;
    }
};
matran Try(matran x, int k)
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
    ll m, k;
    cin >> m >> k;
    matran x;
    x.n = m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x.a[i][j];
        }
    }
    matran kq = Try(x, k);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << kq.a[i][j] << " ";
        }
        cout << endl;
    }
}