#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> mp;
    while (n--)
    {
        int x;
        cin >> x;
        while (x)
        {
            int m = x % 10;
            mp.insert(m);
            x /= 10;
        }
    }
    for (auto it : mp)
    {
        cout << it << " ";
    }
}