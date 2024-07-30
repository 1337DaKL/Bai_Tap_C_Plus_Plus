#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
int visited[1005];
int dem = 0;
void DFS(int i)
{
    dem++;
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
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        ve[x].push_back(y);
        ve[y].push_back(x);
    }
    int maxo = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dem = 0;
            DFS(i);
            maxo = max(maxo, dem);
        }
    }
    cout << maxo << endl;
}