#include <bits/stdc++.h>
using namespace std;
int visited[1005];
vector<int> ve[1005];
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            DFS(it);
        }
    }
}
bool check(int s, int t)
{
    memset(visited, 0, 1005);
    DFS(s);
    if (visited[t] == 0)
        return false;
    return true;
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
    for (int i = 1; i <= n; i++)
    {
        sort(ve[i].begin(), ve[i].end());
    }
    int test;
    cin >> test;
    while (test--)
    {
        int x, y;
        cin >> x >> y;
        if (check(x, y))
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}