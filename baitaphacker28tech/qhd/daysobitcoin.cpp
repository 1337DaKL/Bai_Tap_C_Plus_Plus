#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                b[i] = max(b[i], b[j] + a[i]);
            }
        }
    }
    int c[n];
    for (int i = n - 1; i >= 0; i--)
    {
        c[i] = a[i];
        for (int j = n - 1; j > i; j--)
        {
            if (a[i] > a[j])
            {
                c[i] = max(c[i], c[j] + a[i]);
            }
        }
    }
    int maxo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxo = max(maxo, b[i] + c[i] - a[i]);
    }
    cout << maxo << endl;
}