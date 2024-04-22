#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, m, used[1001][1001], check;
string s;
char a[1001][1001];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void nhap()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    cin >> s;
}

void backtrack(int i, int j, int pos)
{
    if (s.size() == pos)
    {
        check = 1;
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 1 && x <= n && y >= 1 && y <= m && used[x][y] == 0 && a[x][y] == s[pos])
        {
            used[x][y] = 1;
            backtrack(x, y, pos + 1);
            used[x][y] = 0;
        }
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    nhap();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == s[0])
            {
                used[i][j] = 1;
                backtrack(i, j, 1);
                used[i][j] = 0;
            }
        }
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}