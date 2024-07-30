#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
int visited[1005];
int truyvet[1005];
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            truyvet[it] = i;
            DFS(it);
        }
    }
}
void truy(int s, int t)
{
    DFS(s);
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