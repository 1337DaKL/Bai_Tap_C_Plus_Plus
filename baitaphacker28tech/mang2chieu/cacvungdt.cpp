#include <bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int n, m;
char a[105][105];
int dem = 0;
void loang(int i, int j)
{
    a[i][j] = '.';
    for (int k = 0; k < 4; k++)
    {
        int xx = i + dx[k], yy = j + dy[k];
        if (xx >= 0 && xx < n && yy >= 0 && yy < m && a[xx][yy] == '*')
        {
            dem++;
            loang(xx, yy);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    multiset<int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '*')
            {
                loang(i, j);
                mp.insert(dem + 1);
                dem = 0;
            }
        }
    }
    for (auto it : mp)
    {
        cout << it << " ";
    }
}