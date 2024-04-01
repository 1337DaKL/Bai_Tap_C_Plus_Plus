#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void firstcauhinh()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
        ok = 0;
    else
    {
        a[i] = 1;
    }
}
bool check(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != a[n - i + 1])
            return false;
    }
    return true;
}
int main()
{
    cin >> n;
    ok = 1;
    firstcauhinh();
    while (ok)
    {
        if (check(a, n))
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
}