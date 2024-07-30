#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> ve[n + 1];
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            ve[x].push_back(y);
            ve[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
        {
            sort(ve[i].begin(), ve[i].end());
            cout << i << ": ";
            for (auto it : ve[i])
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}