#include <bits/stdc++.h>
using namespace std;
int n, a[100000], ok;
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
        ok = 0;
    else
    {
        a[i] = 8;
    }
}
bool check(int a[], int n)
{
    if (a[1] != 8 || a[n] != 6)
        return false;
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] == 8 && a[i + 1] == 8)
            return false;
    }
    for (int i = 1; i <= n - 3; i++)
    {
        if (a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6)
            return false;
    }
    return true;
}
int main()
{
    cin >> n;
    ok = 1;
    khoitao();
    while (ok)
    {
        if (check(a, n))
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