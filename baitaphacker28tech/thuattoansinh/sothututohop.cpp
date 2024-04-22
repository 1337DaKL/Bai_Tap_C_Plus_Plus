#include <bits/stdc++.h>
using namespace std;
int a[100], ok = 1, n, k;
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
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    while (ok)
    {
        dem++;
        sinh();
    }
    cout << dem << endl;
}