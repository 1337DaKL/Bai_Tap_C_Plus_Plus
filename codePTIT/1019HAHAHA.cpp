#include <bits/stdc++.h>
using namespace std;
int n, ok;
char a[1000];
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 'A';
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 'H')
    {
        a[i] = 'A';
        i--;
    }
    if (i == 0)
        ok = 0;
    else
    {
        a[i] = 'H';
    }
}
bool check(char a[], int n)
{
    if (a[1] != 'H' || a[n] != 'A')
        return false;
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] == 'H' && a[i + 1] == 'H')
            return false;
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
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
}
