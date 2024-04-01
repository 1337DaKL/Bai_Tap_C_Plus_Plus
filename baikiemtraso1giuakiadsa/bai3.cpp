#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    map<int, int> mp;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        for (int i = x; i <= y; i++)
        {
            mp[i]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[i + 1] % 2 == 1)
        {
            a[i] = 1;
        }
    }
    for (auto it : a)
    {
        cout << it << " ";
    }
}