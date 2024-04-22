#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = int(s[i] - '0');
    }
    int h = 0;
    int tong = 0;
    int nho;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            nho = i;
            break;
        }
    }
    for (int i = nho; i < n; i++)
    {
        if (a[i - 1] != 0 && a[i] == 0)
        {
            a[i] = 2;
            h++;
        }
        if (h == k)
        {
            break;
        }
    }
    if (h < k)
    {
        if (a[0] = 0)
        {
            a[0] = 1;
            h++;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] != 0 && a[i] == 0)
            {
                a[i] = 2;
                h++;
            }
            if (h == k)
            {
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    cout << tong;
}