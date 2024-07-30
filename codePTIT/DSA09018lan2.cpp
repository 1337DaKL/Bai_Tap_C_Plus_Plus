#include <bits/stdc++.h>
using namespace std;
vector<int> adjacent[1005];
int visited[1005];
vector<pair<int, int>> canh;
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : adjacent[i])
    {
        if (visited[it] == 0)
        {
            DFS(i);
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
            adjacent[y].push_back(x);
            canh.push_back({x, y});
        }
    }
}