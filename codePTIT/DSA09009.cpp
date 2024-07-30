#include <bits/stdc++.h>
using namespace std;
int visited[1005];
vector<int> adjacent[1005];
void BFS(int i)
{
    queue<int> wait;
    wait.push(i);
    visited[i] = 1;
    while (!wait.empty())
    {
        int x = wait.front();
        wait.pop();
        for (auto it : adjacent[x])
        {
            if (!visited[it])
            {
                wait.push(it);
                visited[it] = 1;
            }
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
        memset(visited, 0, sizeof(visited));
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
            adjacent[y].push_back(x);
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                BFS(i);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}