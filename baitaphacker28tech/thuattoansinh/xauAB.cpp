#include <bits/stdc++.h>
using namespace std;
int n, ok = 1;
char a[10000];
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 'B';
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 'A')
    {
        a[i] = 'B';
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 'A';
    }
}
int main()
{
    cin >> n;
    khoitao();
    while (ok)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}