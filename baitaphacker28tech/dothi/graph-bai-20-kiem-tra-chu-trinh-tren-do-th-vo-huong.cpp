#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
int visited[1005];
int parent[1005];
int ok = 0;
void BFS(int i)
{
    queue<int> wait;
    visited[i] = 1;
    wait.push(i);
    while (!wait.empty())
    {
        int x = wait.front();
        wait.pop();
        for (auto it : ve[x])
        {
            if (visited[it] == 0)
            {
                visited[it] = 1;
                parent[it] = x;
                wait.push(it);
            }
            else if (it != parent[x])
            {
                ok = 1;
            }
        }
    }
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
        memset(visited, 0, sizeof(visited));
        BFS(i);
    }
    cout << ok << endl;
}