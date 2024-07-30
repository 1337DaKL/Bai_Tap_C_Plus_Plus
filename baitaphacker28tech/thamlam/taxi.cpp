#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[5] = {};
    while (n--)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int cnt = a[4] + a[3];
    if (a[1] <= a[3])
        a[1] = 0;
    else
        a[1] -= a[3];
    cnt += a[2] / 2;
    if (a[2] % 2 == 1)
    {
        cnt++;
        if (a[1] >= 2)
        {
            a[1] -= 2;
        }
        else
        {
            a[1] = 0;
            a[2] = 0;
        }
    }
    cnt += (a[1] / 4);
    if (a[1] % 4 != 0)
    {
        cnt++;
    }
    cout << cnt << endl;
}