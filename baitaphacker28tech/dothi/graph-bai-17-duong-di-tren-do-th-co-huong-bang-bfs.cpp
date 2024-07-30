#include <bits/stdc++.h>
using namespace std;
int visited[1005];
vector<int> ve[1005];
int truyvet[1005];
void BFS(int i)
{
    queue<int> doi;
    doi.push(i);
    visited[i] = 1;
    while (!doi.empty())
    {
        int x = doi.front();
        doi.pop();
        for (auto it : ve[x])
        {
            if (visited[it] == 0)
            {
                visited[it] = 1;
                truyvet[it] = x;
                doi.push(it);
            }
        }
    }
}
void truy(int s, int t)
{
    BFS(s);
    if (visited[t] == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> ok;
        while (t != s)
        {
            ok.push_back(t);
            t = truyvet[t];
        }
        ok.push_back(s);
        reverse(ok.begin(), ok.end());
        for (auto it : ok)
        {
            cout << it << " ";
        }
    }
}
int main()
{
    int n, m, s, t;
    cin >> n >> m >> s >> t;
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
    truy(s, t);
}