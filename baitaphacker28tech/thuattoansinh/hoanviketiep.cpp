#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[10000];
    int i = n - 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (n >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        return 0;
    }
    else
    {
        int j = n;
        while (a[j] < a[i])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}