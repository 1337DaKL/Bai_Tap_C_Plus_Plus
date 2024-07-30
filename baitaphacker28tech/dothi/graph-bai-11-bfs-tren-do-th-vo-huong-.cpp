#include <bits/stdc++.h>
using namespace std;
int visited[1005];
vector<int> ve[1005];
void BFS(int i)
{
    queue<int> doi;
    visited[i] = 1;
    doi.push(i);
    while (!doi.empty())
    {
        int x = doi.front();
        doi.pop();
        cout << x << " ";
        for (auto it : ve[x])
        {
            if (visited[it] == 0)
            {
                visited[it] = 1;
                doi.push(it);
            }
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
        ve[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(ve[i].begin(), ve[i].end());
    }
    BFS(s);
}