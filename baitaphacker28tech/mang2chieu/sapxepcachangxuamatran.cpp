#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        vector<int> ok;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            ok.push_back(x);
        }
        sort(ok.begin(), ok.end());
        mp.push_back(ok);
        ok.clear();
    }
    for (auto it : mp)
    {
        for (auto itt : (it))
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}