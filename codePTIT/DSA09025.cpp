#include <bits/stdc++.h>
using namespace std;
void DFS(int i, vector<int> ve[], int visited[], int truyvet[])
{
    visited[i] = 1;
    for (auto it : ve[i])
    {
        if (visited[it] == 0)
        {
            truyvet[it] = i;
            DFS(it, ve, visited, truyvet);
        }
    }
}
void truy(int s, int t, vector<int> ve[], int visited[], int truyvet[])
{
    DFS(s, ve, visited, truyvet);
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
    int test;
    cin >> test;
    while (test--)
    {
        int n, m, s, t;
        cin >> n >> m >> s >> t;
        vector<int> ve[n + 1];
        int visited[n + 1] = {0};
        int truyevet[n + 1] = {0};
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
        truy(s, t, ve, visited, truyevet);
        cout << endl;
    }
}