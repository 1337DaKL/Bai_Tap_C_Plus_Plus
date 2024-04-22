#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int dem = 0;
    dem += mp[4];
    dem += mp[2] / 2;
    mp[2] = mp[2] % 2;
    int x = min(mp[1], mp[3]);
    dem += x;
    if (mp[1] == x)
    {
        mp[1] = 0;
    }
    if (mp[3] == x)
    {
        mp[3] = 0;
    }
    dem += mp[3];
    if (mp[2] == 1)
    {
        mp[1] -= 2;
        dem++;
        while (mp[1] > 0)
        {
            dem++;
            mp[1] -= 4;
        }
    }
    else
    {
        while (mp[1] > 0)
        {
            dem++;
            mp[1] -= 4;
        }
    }
    cout << dem;
}