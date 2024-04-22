#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok = 1;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 6;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 8)
    {
        a[i] = 6;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 8;
    }
}
bool check(int a[])
{
    if (a[1] != 8 || a[n] != 6)
    {
        return false;
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 8 && a[i - 1] == 8)
        {
            return false;
        }
    }
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 6)
        {
            dem++;
        }
        else
        {
            if (dem > 3)
            {
                return false;
            }
            dem = 0;
        }
    }
    if (dem > 3)
    {
        return false;
    }
    return true;
}
int main()
{
    cin >> n;
    khoitao();
    while (ok)
    {
        if (check(a))
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
}