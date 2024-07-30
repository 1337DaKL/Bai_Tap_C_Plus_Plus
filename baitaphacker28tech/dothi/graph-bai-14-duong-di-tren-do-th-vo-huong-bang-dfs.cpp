#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
int visited[1005];
bool check = true;
int duongdi[1005];
void DFS(int i)
{
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            duongdi[it] = i;
            DFS(it);
        }
    }
}
void truyvet(int s, int t)
{
    DFS(s);
    if (visited[t] == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> truy;
        while (t != s)
        {
            truy.push_back(t);
            t = duongdi[t];
        }
        truy.push_back(s);
        reverse(truy.begin(), truy.end());
        for (auto it : truy)
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
        ve[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(ve[i].begin(), ve[i].end());
    }
    truyvet(s, t);
}