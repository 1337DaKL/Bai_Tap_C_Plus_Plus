#include <bits/stdc++.h>
using namespace std;
int a[100], n, ok = 1;
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
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
bool check(int a[], int b[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n;
    int dem = 0;
    khoitao();
    int b[100000];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
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