#include <bits/stdc++.h>
using namespace std;
int visited[1005];
vector<int> adjacent[1005];
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : adjacent[i])
    {
        if (!visited[it])
        {
            DFS(it);
        }
    }
}
void testCase()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        adjacent[i].clear();
    }
    memset(visited, 0, sizeof(visited));
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        adjacent[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        memset(visited, 0, sizeof(visited));
        DFS(i);
        for (int j = 1; j <= n; j++)
        {
            if (!visited[j])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        testCase();
    }
}