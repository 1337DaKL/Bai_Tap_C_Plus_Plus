#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok = 1;
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
        ok = 0;
    else
    {
        a[i] = 1;
    }
}
int main()
{
    int k;
    cin >> n >> k;
    khoitao();
    int b[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int dem = 0;
    while (ok)
    {
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
                cnt += b[i];
        }
        if (cnt == k)
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 1)
                {
                    cout << b[i] << " ";
                }
            }
            cout << endl;
            dem++;
        }
        sinh();
    }
    cout << dem;
}