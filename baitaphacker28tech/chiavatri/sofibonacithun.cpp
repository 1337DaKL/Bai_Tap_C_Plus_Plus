#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
struct Matran
{
    ll a[2][2];
    friend Matran operator*(Matran x, Matran y)
    {
        Matran kq;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                kq.a[i][j] = 0;
                for (int k = 0; k < 2; k++)
                {
                    kq.a[i][j] += x.a[i][k] * y.a[k][j];
                    kq.a[i][j] %= mod;
                }
            }
        }
        return kq;
    }
};
Matran Try(Matran x, ll n)
{
    if (n == 1)
    {
        return x;
    }
    Matran X = Try(x, n / 2);
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
    ll n;
    cin >> n;
    Matran x;
    x.a[0][0] = 1, x.a[0][1] = 1, x.a[1][0] = 1, x.a[1][1] = 0;
    Matran kq = Try(x, n);
    cout << kq.a[0][1] << endl;
}
