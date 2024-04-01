#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &it : a)
    {
        cin >> it;
    }
    for (auto &it : b)
    {
        cin >> it;
    }
    sort(a, a + n);
    sort(b, b + m);
    int tong = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] - b[j] <= 1 && a[i] - b[j] >= -1)
        {
            tong++;
            i++;
            j++;
        }
        else if (a[i] - b[j] > 1)
        {
            j++;
        }
        else if (a[i] - b[j] < -1)
        {
            i++;
        }
    }
    cout << tong << endl;
}