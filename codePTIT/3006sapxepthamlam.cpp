#include <bits/stdc++.h>
using namespace std;
bool check()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i] && a[i] != b[n - i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        if (check())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}