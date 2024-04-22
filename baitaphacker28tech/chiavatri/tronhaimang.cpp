#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> mp;
        while (n--)
        {
            int x;
            cin >> x;
            mp.push_back(x);
        }
        while (m--)
        {
            int x;
            cin >> x;
            mp.push_back(x);
        }
        sort(mp.begin(), mp.end());
        cout << mp[k] << endl;
    }
}