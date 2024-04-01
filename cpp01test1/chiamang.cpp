#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
        if (tong > m)
        {
            dem++;
            tong = a[i];
        }
    }
    if (tong <= m)
        dem++;
    cout << dem << endl;
}
