#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (auto &it : a)
        {
            cin >> it;
            mp[it]++;
        }
        int maxo = INT_MIN;
        for (auto it : mp)
        {
            maxo = max(maxo, it.second);
        }
        if (maxo <= (n / 2))
        {
            cout << "NO\n";
        }
        else
        {
            for (auto it : mp)
            {
                if (it.second == maxo)
                {
                    cout << it.first << " ";
                }
            }
            cout << endl;
        }
    }
}