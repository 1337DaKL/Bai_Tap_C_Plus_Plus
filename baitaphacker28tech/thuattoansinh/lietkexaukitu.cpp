#include <bits/stdc++.h>
using namespace std;
char a[100], s;
int n, ok = 1;
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
    while (i >= 1 && a[i] == s)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = char(int(a[i]) + 1);
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = 'A';
        }
    }
}
int main()
{
    cin >> s >> n;
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