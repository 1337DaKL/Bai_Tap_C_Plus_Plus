#include <bits/stdc++.h>
using namespace std;

int a[1000], n, k, ok = 1, tong;

void khoitao()
{
    for (int i = 1; i <= k; i++)
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

int main()
{
    while (1)
    {
        cin >> n >> k >> tong;
        if (n == 0 && k == 0 && tong == 0)
        {
            return 0;
        }
        ok = 1;
        khoitao();
        int dem = 0;
        if (k <= n)
        {
            while (ok)
            {
                int ff = 0;
                for (int i = 1; i <= k; i++)
                {
                    ff += a[i];
                }
                if (tong == ff)
                {
                    dem++;
                }
                sinh();
            }
        }
        cout << dem << endl;
    }
}
