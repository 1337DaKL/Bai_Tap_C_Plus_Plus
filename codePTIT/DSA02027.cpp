#include <bits/stdc++.h>
using namespace std;
int n, a[100][100], cmin;
void khoitao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            cmin = min(cmin, a[i][j]);
        }
    }
}
int X[100], nho[100], mino, tong;
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (nho[j] == 0)
        {
            X[i] = j;
            tong += a[X[i - 1]][X[i]];
            nho[j] = 1;
            if (i == n)
            {
                mino = min(mino, tong + a[X[i]][1]);
            }
            else if (tong + cmin * (n - i) < mino)
            {
                Try(i + 1);
            }
            tong -= a[X[i - 1]][X[i]];
            nho[j] = 0;
        }
    }
}
int main()
{
    cmin = INT_MAX, tong = 0, mino = INT_MAX;
    khoitao();
    X[1] = 1;
    nho[1] = 1;
    Try(2);
    cout << mino << endl;
}