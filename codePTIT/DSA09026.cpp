#include <bits/stdc++.h>
using namespace std;
void BFS(int i, vector<int> ve[], int visited[], int truyvet[])
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
                truyvet[it] = x;
                visited[it] = 1;
                doi.push(it);
            }
        }
    }
}
void truy(int s, int t, vector<int> ve[], int visited[], int truyvet[])
{
    BFS(s, ve, visited, truyvet);
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
        int truyvet[n + 1] = {0};
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
        truy(s, t, ve, visited, truyvet);
        cout << endl;
    }
}