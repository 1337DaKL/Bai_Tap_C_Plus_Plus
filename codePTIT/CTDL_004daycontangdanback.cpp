#include <bits/stdc++.h>
using namespace std;
int a[1000], b[10000], ok = 1, n, k;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
bool check()
{
    for (int i = 2; i <= k; i++)
    {
        if (b[a[i - 1]] > b[a[i]])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    khoitao();
    int dem = 0;
    while (ok)
    {
        if (check())
        {
            dem++;
        }
        sinh();
    }
    cout << dem;
}