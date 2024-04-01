#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    int i = 0, j = 0;
    int dem = 0;
    while (i < n && j < m)
    {
        if (a[i] > b[j])
        {
            dem++;
            j++;
            i++;
        }
        else
        {
            i++;
        }
    }
    cout << dem << endl;
}