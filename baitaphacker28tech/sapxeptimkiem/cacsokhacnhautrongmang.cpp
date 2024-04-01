#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (auto &it : a)
        cin >> it;
    set<long long> mp;
    for (auto it : a)
    {
        mp.insert(it);
    }
    cout << mp.size();
}