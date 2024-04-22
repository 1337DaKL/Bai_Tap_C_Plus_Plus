#include <bits/stdc++.h>
using namespace std;
int a[100], n, ok = 1;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
bool check()
{
    if (n <= 4)
    {
        if (a[1] == 1 || a[n] == 1)
        {
            return true;
        }
    }
    else
    {
        if ((a[1] == 1 || a[1] == 5) && (a[n] == 1 || a[n] == 5))
        {
            return true;
        }
        for (int i = 2; i <= n; i++)
        {
            if (a[i - 1] == 1 && a[i] == 5)
                return true;
            if (a[i - 1] == 5 && a[i] == 1)
                return true;
        }
    }
    return false;
}
int main()
{
    char l;
    cin >> l;
    n = int(l - 'A' + 1);
    khoitao();
    while (ok)
    {
        if (check())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << char('A' + a[i] - 1);
            }
            cout << endl;
        }
        sinh();
    }
}