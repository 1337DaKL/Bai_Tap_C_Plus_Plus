#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {0};
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(i, 3); j++)
        {
            a[i] = a[i] + a[i - j];
        }
    }
    cout << a[n] << endl;
}