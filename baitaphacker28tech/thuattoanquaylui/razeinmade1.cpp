#include <bits/stdc++.h>
using namespace std;
int a[100][100], n;
bool ok = true;
string s = "";
void Try(int i, int j)
{
    if (i == n && j == n)
    {
        cout << s << endl;
        ok = false;
        return;
    }
    if (i + 1 <= n && a[i + 1][j] == 1)
    {
        s += "D";
        Try(i + 1, j);
        s.pop_back();
    }
    if (j + 1 <= n && a[i][j + 1] == 1)
    {
        s += "R";
        Try(i, j + 1);
        s.pop_back();
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1, 1);
    if (ok)
    {
        cout << -1 << endl;
    }
}