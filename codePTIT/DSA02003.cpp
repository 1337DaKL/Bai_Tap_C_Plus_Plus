#include <bits/stdc++.h>
using namespace std;
int a[100][100], n;
bool ok = true;
string s = "";
void Try(int i, int j)
{
    if (i == n && j == n)
    {
        cout << s << " ";
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
    int test;
    cin >> test;
    while (test--)
    {
        s = "";
        cin >> n;
        ok = true;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        if (a[1][1] == 0 || a[n][n] == 0)
        {
            cout << -1;
        }
        else
        {
            Try(1, 1);
            if (ok)
            {
                cout << -1;
            }
        }
        cout << endl;
    }
}