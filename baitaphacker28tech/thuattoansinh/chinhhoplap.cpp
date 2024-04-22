#include <bits/stdc++.h>
using namespace std;
int n, k, a[1000000], ok = 1;
void khoitao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = 1;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n)
    {
        a[i] = 1;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
    }
}
int main()
{
    cin >> n >> k;
    khoitao();
    while (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}