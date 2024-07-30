#include <bits/stdc++.h>
using namespace std;
int visited[1005];
vector<int> ve[1005];
void DFS(int i)
{
    cout << i << " ";
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            DFS(it);
        }
    }
}
int main()
{
    int n, m, s;
    cin >> n >> m >> s;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        ve[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(ve[i].begin(), ve[i].end());
    }
    DFS(s);
}