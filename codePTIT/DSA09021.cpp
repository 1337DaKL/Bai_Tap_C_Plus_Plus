#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    vector<int> ke[n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                ke[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
        for (auto it : ke[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}