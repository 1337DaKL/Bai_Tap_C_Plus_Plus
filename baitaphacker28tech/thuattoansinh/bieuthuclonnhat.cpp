#include <bits/stdc++.h>
using namespace std;
int a[1000], ok = 1;
void khoitao()
{
    for (int i = 1; i <= 3; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = 3;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
    }
}
int main()
{
    int x, y, z, t;
    cin >> x >> y >> z >> t;
    int b[5] = {x, y, z, t};
    khoitao();
    int maxo = INT_MIN;
    while (ok)
    {
        int tong = x;
        for (int i = 1; i <= 3; i++)
        {
            if (a[i] == 0)
            {
                tong += b[i];
            }
            else
            {
                tong -= b[i];
            }
        }
        maxo = max(maxo, tong);
        sinh();
    }
    cout << maxo;
}