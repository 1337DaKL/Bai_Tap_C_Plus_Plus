#include <bits/stdc++.h>
using namespace std;
int a[100], n, k, s, dem = 0;
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            int tong = 0;
            for (int u = 1; u <= k; u++)
            {
                tong += a[u];
            }
            if (tong == s)
            {
                dem++;
            }
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    cin >> n >> k >> s;
    Try(1);
    cout << dem << endl;
}