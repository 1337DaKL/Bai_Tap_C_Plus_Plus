#include <bits/stdc++.h>
using namespace std;
vector<int> adjacent[1005];
int degree[1005];
int n;
void kain()
{
    queue<int> wait;
    for (int i = 1; i <= n; i++)
    {
        if (degree[i] == 0)
        {
            wait.push(i);
        }
    }
    int cnt = 0;
    while (!wait.empty())
    {
        int x = wait.front();
        wait.pop();
        cnt++;
        for (auto it : adjacent[x])
        {
            degree[it]--;
            if (degree[it] == 0)
            {
                wait.push(it);
            }
        }
    }
    if (cnt != n)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            adjacent[i].clear();
        }
        memset(degree, 0, sizeof(degree));
        while (m--)
        {
            int x, y;
            cin >> x >> y;
            adjacent[x].push_back(y);
            degree[y]++;
        }
        kain();
    }
}