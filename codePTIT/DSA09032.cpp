#include <bits/stdc++.h>
using namespace std;
int visited[100005];
vector<int> adjacent[100005];
int cnt;
void DFS(int i)
{
    cnt++;
    visited[i] = 1;
    for (auto it : adjacent[i])
    {
        if (!visited[it])
        {
            DFS(it);
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
        for (int i = 1; i <= n; i++)
        {
            adjacent[i].clear();
        }
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
            adjacent[y].push_back(x);
        }
        memset(visited, 0, sizeof(visited));
        int maxo = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                cnt = 0;
                DFS(i);
                maxo = max(maxo, cnt);
            }
        }
        cout << maxo << endl;
    }
}