#include <bits/stdc++.h>
using namespace std;
bool ok(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >= a[i])
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    if (ok(a, n))
        cout << "YES\n";
    else
        cout << "NO\n";
}