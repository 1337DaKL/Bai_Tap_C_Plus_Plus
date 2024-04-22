#include <bits/stdc++.h>
using namespace std;
int a[1000], n, ok = 1;
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
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            dem++;
        }
        else
        {
            dem--;
            if (dem < 0)
                return false;
        }
    }
    if (dem == 0)
        return true;
    return false;
}
int main()
{
    cin >> n;
    khoitao();
    int uu = 1;
    while (ok)
    {
        if (check())
        {
            uu = 0;
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 0)
                {
                    cout << '(';
                }
                else
                {
                    cout << ')';
                }
            }
            cout << endl;
        }
        sinh();
    }
    if (uu)
    {
        cout << "NOT FOUND";
    }
}