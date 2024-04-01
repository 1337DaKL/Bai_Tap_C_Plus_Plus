#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        vector<int> mp;
        for (int i = 0; i < n; i++)
        {
            mp.push_back(a[i][j]);
        }
        sort(mp.begin(), mp.end());
        int ok = 0;
        for (auto it : mp)
        {
            a[ok][j] = it;
            ok++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}