#include <bits/stdc++.h>
using namespace std;
int n, a[100][100], X[100], nho[100], mino = INT_MAX, amin = INT_MAX, tong = 0;
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
                mino = min(mino, tong + a[X[n]][1]);
            }
            else if (tong + amin * (n - i + 1) < mino)
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
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j])
            {
                amin = min(a[i][j], amin);
            }
        }
    }
    X[1] = 1;
    nho[1] = 1;
    Try(2);
    cout << mino << endl;
}