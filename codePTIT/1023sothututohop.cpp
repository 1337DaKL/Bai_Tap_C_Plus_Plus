#include <bits/stdc++.h>
using namespace std;
int n, k, a[100000], ok;
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
        i--;
    if (i == 0)
        ok = 0;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}
bool check(int a[], int b[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
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
        cin >> n >> k;
        int b[1000];
        for (int j = 1; j <= k; j++)
        {
            cin >> b[j];
        }
        int dem = 0;
        int ok = 1;
        khoitao();
        while (ok)
        {
            dem++;
            if (check(a, b, k))
            {
                cout << dem << endl;
                break;
            }
            sinh();
        }
    }
}