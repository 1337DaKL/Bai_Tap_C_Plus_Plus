#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    set<int> aa, bb, ab;
    for (auto &it : a)
    {
        cin >> it;
        aa.insert(it);
        ab.insert(it);
    }
    for (auto &it : b)
    {
        cin >> it;
        bb.insert(it);
        ab.insert(it);
    }
    for (auto it : aa)
    {
        if (bb.find(it) != bb.end())
        {
            cout << it << " ";
        }
    }
    cout << endl;
    for (auto it : ab)
    {
        cout << it << " ";
    }
}