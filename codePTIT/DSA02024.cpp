#include <bits/stdc++.h>
using namespace std;
int n, a[1000], b[100];
vector<string> mp;
bool check()
{
    vector<int> ok;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            ok.push_back(b[i]);
        }
    }
    if (ok.size() <= 1)
    {
        return false;
    }
    for (int i = 1; i < ok.size(); i++)
    {
        if (ok[i - 1] > ok[i])
            return false;
    }
    return true;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            if (check())
            {
                string s = "";
                for (int i = 1; i <= n; i++)
                {
                    if (a[i] == 1)
                    {
                        s = s + to_string(b[i]) + " ";
                    }
                }
                mp.push_back(s);
            }
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    Try(1);
    sort(mp.begin(), mp.end());
    for (auto it : mp)
    {
        cout << it << endl;
    }
}