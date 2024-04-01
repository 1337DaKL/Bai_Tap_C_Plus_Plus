#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (auto &it : a)
    {
        cin >> it;
        mp[it] = it;
    }
    sort(a, a + n, greater<int>());
    int maxo = n;
    for (auto i = 0; i < n; i++)
    {
        if (a[i] <= maxo - i)
        {
            maxo = a[i] + i;
        }
    }
    if (a[0] == 1)
    {
        cout << 2;
    }
    else
    {
        cout << maxo;
    }
}