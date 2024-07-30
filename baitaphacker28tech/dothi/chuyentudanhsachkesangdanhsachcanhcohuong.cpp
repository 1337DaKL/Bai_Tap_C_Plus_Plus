#include <bits/stdc++.h>
using namespace std;
bool ok(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<int, int>> ve;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string m;
        while (ss >> m)
        {
            int j = stoi(m);
            ve.push_back({i + 1, j});
        }
    }
    sort(ve.begin(), ve.end(), ok);
    for (auto it : ve)
    {
        cout << it.first << ' ' << it.second << endl;
    }
}