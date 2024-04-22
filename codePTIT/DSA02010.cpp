#include <bits/stdc++.h>
using namespace std;
int a[1000], x[1000], ok, n, s;
void khoitao()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        ok = 0;
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}
void Try(int pos, int i, int tong)
{
    for (int j = pos; j <= n; j++)
    {
        x[i] = a[j];
        tong += a[j];
        if (tong == s)
        {
            ok = 1;
            cout << "[";
            for (int k = 1; k <= i - 1; k++)
            {
                cout << x[k] << " ";
            }
            cout << x[i];
            cout << "]";
        }
        else if (tong < s)
        {
            Try(j, i + 1, tong);
        }
        tong -= a[j];
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        khoitao();
        Try(1, 1, 0);
        if (ok == 0)
        {
            cout << -1;
        }
        cout << endl;
    }
}