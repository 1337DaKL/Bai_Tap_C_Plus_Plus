#include <bits/stdc++.h>
using namespace std;
vector<int> adjacent[1005];
int visited[1005];
int parent[1005];
int ok, t;
vector<int> kq;
void DFS(int i)
{
    visited[i] = 1;
    kq.push_back(i);
    for (auto it : adjacent[i])
    {
        if (!visited[it])
        {
            parent[it] = i;
            DFS(it);
        }
        else if (it != parent[i])
        {
            ok = 1;
            return;
        }
    }
    kq.pop_back();
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            adjacent[i].clear();
        }
        ok = 0;
        kq.clear();
        memset(visited, 0, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
            adjacent[y].push_back(x);
        }
        for (int i = 1; i <= n; i++)
        {
            sort(adjacent[i].begin(), adjacent[i].begin());
        }
        DFS(1);
        if (!ok)
        {
            cout << "NO\n";
        }
        else
        {
            for (auto it : kq)
                cout << it << " ";
            cout << 1 << endl;
        }
    }
}