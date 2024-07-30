#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    vector<string> ve;
    vector<int> mp[n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                string s = "";
                s = s + to_string(i) + " " + to_string(j);
                ve.push_back(s);
                mp[i].push_back(j);
            }
        }
    }
    for (auto it : ve)
    {
        cout << it << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        sort(mp[i].begin(), mp[i].end());
        for (auto it : mp[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}