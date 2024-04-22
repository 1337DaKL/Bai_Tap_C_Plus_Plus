#include <bits/stdc++.h>
using namespace std;
int n, a[100][100], nho[1000][1000];
void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
}
multiset<string> mp;
string s;
void Try(int i, int j)
{
    if (i == n && j == n)
    {
        mp.insert(s);
        return;
    }
    if (i + 1 <= n && a[i + 1][j] == 1 && nho[i + 1][j] == 0)
    {
        s.push_back('D');
        nho[i + 1][j] = 1;
        Try(i + 1, j);
        s.pop_back();
        nho[i + 1][j] = 0;
    }
    if (j + 1 <= n && a[i][j + 1] == 1 && nho[i][j + 1] == 0)
    {
        s.push_back('R');
        nho[i][j + 1] = 1;
        Try(i, j + 1);
        s.pop_back();
        nho[i][j + 1] = 0;
    }
    if (j - 1 >= 1 && a[i][j - 1] == 1 && nho[i][j - 1] == 0)
    {
        s.push_back('L');
        nho[i][j - 1] = 1;
        Try(i, j - 1);
        s.pop_back();
        nho[i][j - 1] = 0;
    }
    if (i - 1 >= 1 && a[i - 1][j] == 1 && nho[i - 1][j] == 0)
    {
        s.push_back('U');
        nho[i - 1][j] = 1;
        Try(i - 1, j);
        s.pop_back();
        nho[i - 1][j] = 0;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        nhap();
        mp.clear();
        s = "";
        if (a[1][1] == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            nho[1][1] = 1;
            Try(1, 1);
            nho[1][1] = 0;
            if (mp.size() == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                for (auto it : mp)
                {
                    cout << it << " ";
                }
                cout << endl;
            }
        }
    }
}