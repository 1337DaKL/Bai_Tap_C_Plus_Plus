#include <bits/stdc++.h>
using namespace std;
int n, a[1000], ok;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[j], a[i]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++, r--;
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
        cin >> n;
        ok = 1;
        khoitao();
        int b[100000];
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        int dem = 0;
        while (ok)
        {
            dem++;
            if (check(a, b, n))
            {
                cout << dem << endl;
                break;
            }
            sinh();
        }
    }
}