#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int i = k;
    int a[10000];
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    while (i >= 1 && n - k + i == a[i])
    {
        i--;
    }
    if (i < 1)
    {
        for (int j = 1; j <= k; j++)
        {
            cout << j << " ";
        }
        return 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
    for (int i = 1; i <= k; i++)
    {
        cout << a[i] << " ";
    }
}