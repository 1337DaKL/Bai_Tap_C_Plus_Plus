#include <bits/stdc++.h>
using namespace std;
int n, a[100], X[1000], nho[100], tong = 0, s = 0, check = false;
void Try(int i)
{
    for (int j = i; j <= n; j++)
    {
        if (nho[j] == 0)
        {
            nho[j] = 1;
            tong += a[j];
            if (tong == s)
            {
                check = true;
                return;
            }
            else if (tong < s)
            {
                Try(j + 1);
            }
            nho[j] = 0;
            tong -= a[j];
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 2 == 1)
    {
        cout << 0;
    }
    else
    {
        s = s / 2;
        Try(1);
        if (check)
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
}