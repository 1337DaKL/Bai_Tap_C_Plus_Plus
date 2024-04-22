#include <bits/stdc++.h>
using namespace std;
int a[1000][1000], n, m, dem = 0;
void Try(int i, int j)
{
    if (i == n && j == m)
        dem++;
    if (i < n)
    {
        Try(i + 1, j);
    }
    if (j < m)
    {
        Try(i, j + 1);
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        Try(1, 1);
        cout << dem << endl;
        dem = 0;
    }
}
