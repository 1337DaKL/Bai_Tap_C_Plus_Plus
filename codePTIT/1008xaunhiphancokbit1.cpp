#include <bits/stdc++.h>
using namespace std;
int n, a[1000], ok;
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
    int test;
    cin >> test;
    while (test--)
    {
        int k;
        cin >> n >> k;
        ok = 1;
        khoitao();
        while (ok)
        {
            int dem = 0;
            for (int i = 1; i <= n; i++)
            {
                if (a[i] == 1)
                    dem++;
            }
            if (dem == k)
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