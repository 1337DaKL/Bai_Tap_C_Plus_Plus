#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
int visited[1005];
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
int main()
{
    int n, m;
    cin >> n >> m;
    if (m != n - 1)
    {
        cout << 0 << endl;
        return 0;
    }
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
        DFS(i);
        for (int j = 1; j <= n; j++)
        {
            if (!visited[j])
            {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    cout << 1 << endl;
}