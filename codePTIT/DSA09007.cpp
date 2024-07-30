#include <bits/stdc++.h>
using namespace std;

void BFS(int i, vector<int> ve[], int visited[], int way[])
{
    queue<int> wait;
    wait.push(i);
    visited[i] = 1;
    while (!wait.empty())
    {
        int x = wait.front();
        wait.pop();
        for (auto it : ve[x])
        {
            if (visited[it] == 0)
            {
                wait.push(it);
                way[it] = x;
                visited[it] = 1;
            }
        }
    }
}

void findtheway(int s, int t, vector<int> ve[], int visited[], int way[])
{
    BFS(s, ve, visited, way);
    if (visited[t] == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> result;
        while (t != s)
        {
            result.push_back(t);
            t = way[t];
        }
        result.push_back(s);
        reverse(result.begin(), result.end());
        for (auto it : result)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, s, t;
        cin >> n >> m >> s >> t;
        vector<int> ve[n + 1];
        int *way = new int[n + 1];
        int *visited = new int[n + 1];
        memset(visited, 0, sizeof(int) * (n + 1));
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
        findtheway(s, t, ve, visited, way);
        delete[] way;
        delete[] visited;
    }
    return 0;
}
