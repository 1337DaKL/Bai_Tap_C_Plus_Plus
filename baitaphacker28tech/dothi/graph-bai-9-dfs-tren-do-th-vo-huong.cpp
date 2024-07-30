#include <bits/stdc++.h>
using namespace std;
int check[1005];
vector<int> ve[1005];
void DFS(int i)
{
    check[i] = 1;
    cout << i << " ";
    for (auto it : ve[i])
    {
        if (!check[it])
        {
            DFS(it);
        }
    }
}
int main()
{
    int n, m, s;
    cin >> n >> m >> s;
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
    DFS(s);
}