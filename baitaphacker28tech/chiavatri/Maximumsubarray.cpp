#include <bits/stdc++.h>
using namespace std;
int a[100], tong = 0, maxo = INT_MIN, n;
void Try(int pos)
{
    for (int i = pos; i <= n; i++)
    {
        tong += a[i];
        maxo = max(maxo, tong);
        Try(i + 1);
        tong -= a[i];
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    Try(1);
    cout << maxo << endl;
}