#include <bits/stdc++.h>
using namespace std;
void DFS(int i, vector<int> ve[], int visited[])
{
    visited[i] = 1;
    cout << i << " ";
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            DFS(it, ve, visited);
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, s;
        cin >> n >> m >> s;
        vector<int> ve[n + 1];
        int visited[n + 1] = {0};
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
        DFS(s, ve, visited);
        cout << endl;
    }
}