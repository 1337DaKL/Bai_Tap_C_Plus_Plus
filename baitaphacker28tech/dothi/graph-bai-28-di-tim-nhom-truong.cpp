#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
int visited[1005];
vector<pair<int, int>> leadteam;
void DFS(int i)
{
    visited[i] = 1;
    leadteam.push_back({i, ve[i].size()});
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            DFS(it);
        }
    }
}
bool check(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        ve[x].push_back(y);
        ve[y].push_back(x);
    }
    vector<int> ok;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            leadteam.clear();
            DFS(i);
            sort(leadteam.begin(), leadteam.end(), check);
            auto it = leadteam.begin();
            ok.push_back((*it).first);
        }
    }
    sort(ok.begin(), ok.end());
    for (auto it : ok)
    {
        cout << it << " ";
    }
}