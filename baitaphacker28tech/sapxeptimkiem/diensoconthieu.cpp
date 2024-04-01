#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    set<int> mp;
    for (auto &it : a)
    {
        cin >> it;
        mp.insert(it);
    }
    sort(a, a + n);
    cout << (a[n - 1] - a[0] + 1) - mp.size() << endl;
}