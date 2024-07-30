#include <bits/stdc++.h>
using namespace std;
int degree[1005];
vector<int> ve[1005];
int visited[1005];
int n, m;
void BFS()
{
    queue<int> wait;
    for (int i = 1; i <= n; i++)
    {
        if (degree[i] == 0)
        {
            wait.push(i);
        }
    }
    int cnt = 0;
    while (!wait.empty())
    {
        int x = wait.front();
        wait.pop();
        cnt++;
        for (auto it : ve[x])
        {
            degree[it]--;
            if (degree[it] == 0)
            {
                wait.push(it);
            }
        }
    }
    if (cnt != n)
    {
        cout << 1 << endl;
    }
    else
        cout << 0 << endl;
}
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        ve[x].push_back(y);
        degree[y]++;
    }
    BFS();
}