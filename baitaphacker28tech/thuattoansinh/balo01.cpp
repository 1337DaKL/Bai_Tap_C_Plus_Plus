#include <bits/stdc++.h>
using namespace std;
int n, a[1000], ok = 1, m;
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
int main()
{
    cin >> n >> m;
    int b[100000], c[100000];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
    }
    int maxo = INT_MIN;
    khoitao();
    while (ok)
    {
        int gt = 0, tl = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                tl += b[i];
                gt += c[i];
            }
        }
        if (tl <= m)
        {
            maxo = max(maxo, gt);
        }
        sinh();
    }
    cout << maxo << endl;
}
