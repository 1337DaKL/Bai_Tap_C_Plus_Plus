#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> mp;
    int a[n + 1][n + 1] = {0};
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string m;
        while (ss >> m)
        {
            int j = stoi(m);
            if (a[i][j] == 0)
            {
                mp.push_back({i, j});
                a[i][j] = 1, a[j][i] = 1;
            }
        }
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}