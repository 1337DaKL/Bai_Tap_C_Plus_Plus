#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (auto &it : a)
        cin >> it;
    sort(a, a + n);
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int ok = m - a[i];
        dem += (upper_bound(a + i + 1, a + n, ok) - lower_bound(a + i + 1, a + n, ok));
    }
    cout << dem << endl;
}