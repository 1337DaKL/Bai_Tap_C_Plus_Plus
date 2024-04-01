#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], ok;
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
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        ok = 1;
        khoitao();
        while (ok)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}