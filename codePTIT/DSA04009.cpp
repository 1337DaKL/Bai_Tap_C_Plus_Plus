#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll n;
struct matran
{
    ll a[11][11];
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

matran Try(matran x, ll n)
{
    if (n == 1)
    {
        return x;
    }
    matran X = Try(x, n / 2);
    if (n % 2 == 0)
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
    int test;
    cin >> test;
    while (test--)
    {
        ll m;
        cin >> n >> m;
        matran x;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> x.a[i][j];
            }
        }
        matran kq = Try(x, m);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << kq.a[i][j] << " ";
            }
            cout << endl;
        }
    }
}