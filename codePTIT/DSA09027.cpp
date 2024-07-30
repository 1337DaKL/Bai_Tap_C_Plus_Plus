#include <bits/stdc++.h>
using namespace std;
void DFS(int i, vector<int> ve[], int visited[])
{
    visited[i] = 1;
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
        int n, m;
        cin >> n >> m;
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
        int testt;
        cin >> testt;
        while (testt--)
        {
            for (int i = 1; i <= n; i++)
            {
                visited[i] = 0;
            }
            int s, t;
            cin >> s >> t;
            DFS(s, ve, visited);
            if (visited[t] == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}