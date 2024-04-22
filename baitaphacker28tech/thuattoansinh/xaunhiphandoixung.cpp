#include <bits/stdc++.h>
using namespace std;
int n, ok = 1, a[1000];
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
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
bool check()
{
    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        if (a[i] != a[n - i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n;
    khoitao();
    while (ok)
    {
        if (check())
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