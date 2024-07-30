#include <bits/stdc++.h>
using namespace std;
void BFS(int i, vector<int> ve[], int visited[])
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
                doi.push(it);
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
        int n, m, s;
        cin >> n >> m >> s;
        vector<int> ve[n + 1];
        int visited[n + 1] = {0};
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
        BFS(s, ve, visited);
        cout << endl;
    }
}