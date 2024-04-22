#include <bits/stdc++.h>
using namespace std;
int n, a[100], nho[100];
bool check(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
        {
            return false;
        }
    }
    return true;
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
                    for (int k = 1; k <= n; k++)
                    {
                        cout << a[k];
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
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        Try(1);
    }
}