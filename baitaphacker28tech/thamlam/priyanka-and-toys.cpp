#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    sort(a, a + n);
    int cnt = 0;
    int tong = a[0] + 4;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > tong)
        {
            cnt++;
            tong = a[i] + 4;
        }
    }
    if (tong >= a[n - 1])
        cnt++;
    cout << cnt << endl;
}