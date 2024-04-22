#include <bits/stdc++.h>
using namespace std;
int a[100][100], b[100][100], check = true, n;
string s = "";
vector<string> mp;
void Try(int i, int j)
{
    if (i == n && j == n)
    {
        mp.push_back(s);
        check = false;
        return;
    }
    if (i + 1 <= n && a[i + 1][j] == 1 && b[i + 1][j] == 0)
    {
        s += "D";
        b[i + 1][j] = 1;
        Try(i + 1, j);
        b[i + 1][j] = 0;
        s.pop_back();
    }
    if (j + 1 <= n && a[i][j + 1] == 1 && b[i][j + 1] == 0)
    {
        s += "R";
        b[i][j + 1] = 1;
        Try(i, j + 1);
        b[i][j + 1] = 0;
        s.pop_back();
    }
    if (j - 1 >= 1 && a[i][j - 1] == 1 && b[i][j - 1] == 0)
    {
        s += "L";
        b[i][j - 1] = 1;
        Try(i, j - 1);
        b[i][j - 1] = 0;
        s.pop_back();
    }
    if (i - 1 >= 1 && a[i - 1][j] == 1 && b[i - 1][j] == 0)
    {
        s += "U";
        b[i - 1][j] = 1;
        Try(i - 1, j);
        b[i - 1][j] = 0;
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
    b[1][1] = 1;
    Try(1, 1);
    if (check)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(mp.begin(), mp.end());
        for (auto it : mp)
        {
            cout << it << endl;
        }
    }
}