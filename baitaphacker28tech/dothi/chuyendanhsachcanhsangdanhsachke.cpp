#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> ve[n + 1];
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        ve[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        sort(ve[i].begin(), ve[i].end());
        for (auto it : ve[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}