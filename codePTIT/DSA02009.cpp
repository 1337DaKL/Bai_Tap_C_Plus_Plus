#include <bits/stdc++.h>
using namespace std;
int n, s, k;
int a[1000];
void khoitao()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
}
int tong = 0, dem = 0, ok = 0;
void Try(int pos)
{
    for (int i = pos; i <= n; i++)
    {
        tong += a[i];
        dem++;
        if (tong == s)
        {
            ok = 1;
            return;
        }
        else if (tong < s)
        {
            Try(i + 1);
        }
        tong -= a[i];
        dem--;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        s = 0;
        tong = 0, dem = 0, ok = 0;
        khoitao();
        if (s % k != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            s = s / k;
            Try(1);
            cout << ok << endl;
        }
    }
}