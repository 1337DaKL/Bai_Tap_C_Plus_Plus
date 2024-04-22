#include <bits/stdc++.h>
using namespace std;
int a[100], n, nho[1000];
bool check(int a[], int n)
{
    if (n <= 4)
    {
        if (a[1] == 1 || a[n] == 1)
        {
            return true;
        }
        return false;
    }
    else
    {
        if (a[1] == 1 && a[n] == 5 || a[1] == 5 && a[n] == 1)
        {
            return true;
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 1 && a[i + 1] == 5)
            {
                return true;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 5 && a[i + 1] == 1)
            {
                return true;
            }
        }
        return false;
    }
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (nho[j] == 0)
        {
            nho[j] = 1;
            a[i] = j;
            if (i == n)
            {
                if (check(a, n))
                {
                    for (int i = 1; i <= n; i++)
                    {
                        cout << char('A' + a[i] - 1);
                    }
                    cout << endl;
                }
            }
            else
            {
                Try(i + 1);
            }
            nho[j] = 0;
        }
    }
}
int main()
{
    char s;
    cin >> s;
    n = int(s - 'A') + 1;
    Try(1);
}