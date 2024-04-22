#include <bits/stdc++.h>
using namespace std;
int n, a[1000], b[10000];
bool check(vector<int> mp)
{
    if (mp.size() <= 1)
    {
        return false;
    }
    for (int i = 1; i < mp.size(); i++)
    {
        if (mp[i] < mp[i - 1])
            return false;
    }
    return true;
}
vector<string> ok;
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        b[i] = j;
        if (i == n)
        {
            vector<int> mp;
            for (int i = 1; i <= n; i++)
            {
                if (b[i] == 1)
                {
                    mp.push_back(a[i]);
                }
            }
            if (check(mp))
            {
                string s = "";
                for (auto it : mp)
                {
                    s += to_string(it);
                    s += " ";
                }
                ok.push_back(s);
            }
            mp.clear();
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
        cin >> a[i];
    }
    Try(1);
    sort(ok.begin(), ok.end());
    for (auto it : ok)
    {
        for (auto itt : it)
        {
            cout << itt;
        }
        cout << endl;
    }
}