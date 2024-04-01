#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    map<int, int> mp;
    for (auto it : a)
    {
        mp[it]++;
        auto itt = mp.rbegin();
        if ((*itt).first == it && mp[it] == 1)
            cout << it << " ";
    }
}