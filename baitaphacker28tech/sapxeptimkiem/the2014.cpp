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
    int dem = 1;
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) > m)
        {
            dem++;
        }
    }
    cout << dem << endl;
}
