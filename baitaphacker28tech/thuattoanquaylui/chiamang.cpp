#include <bits/stdc++.h>
using namespace std;
int n, s, a[10000], deu, tong = 0, check = 0;
void Try(int i = 1)
{
    for (int j = i; j <= n; j++)
    {
        tong += a[i];
        if (tong == deu)
        {
            check = 1;
        }
        else if (tong < deu)
        {
            Try(i + 1);
        }
        tong -= a[i];
    }
}
int main()
{
    cin >> n >> s;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % s != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        deu = sum / s;
        Try(1);
        if (check)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}