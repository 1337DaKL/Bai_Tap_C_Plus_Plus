#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n - 1;
    map<int, int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    while (m--)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            cout << it.first << endl;
            break;
        }
    }
}