#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
int visited[1005];
void BFS(int i)
{
    queue<int> doi;
    doi.push(i);
    visited[i] = 1;
    while (!doi.empty())
    {
        int x = doi.front();
        doi.pop();
        cout << x << " ";
        for (auto it : ve[x])
        {
            if (visited[it] == 0)
            {
                doi.push(it);
                visited[it] = 1;
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
    }
    for (int i = 1; i <= n; i++)
    {
        sort(ve[i].begin(), ve[i].end());
    }
    BFS(s);
}