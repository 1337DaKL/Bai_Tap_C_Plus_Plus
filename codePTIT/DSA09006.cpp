#include <bits/stdc++.h>
using namespace std;
vector<int> ve[1005];
int visited[1005];
int ok;
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
        vector<int> kq;
        while (t != s)
        {
            kq.push_back(t);
            t = duongdi[t];
        }
        kq.push_back(s);
        reverse(kq.begin(), kq.end());
        for (auto it : kq)
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
        memset(visited, 0, sizeof(visited));
        memset(duongdi, 0, sizeof(duongdi));
        for (int i = 1; i <= n; i++)
        {
            ve[i].clear();
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
            sort(ve[i].begin(), ve[i].end());
        }
        truyvet(s, t);
    }
}