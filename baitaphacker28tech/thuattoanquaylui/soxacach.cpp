#include <bits/stdc++.h>
using namespace std;
int n, a[1000], nho[1000];
vector<vector<int>> mp;
bool check(vector<int> ok)
{
    for (int i = 1; i < n; i++)
    {
        if (abs(ok[i] - ok[i - 1]) == 1)
            return false;
    }
    return true;
}
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (nho[j] == 0)
        {
            a[i] = j;
            nho[j] = 1;
            if (i == n)
            {
                vector<int> ok;
                for (int k = 1; k <= n; k++)
                {
                    ok.push_back(a[k]);
                }
                if (check(ok))
                {
                    mp.push_back(ok);
                }
                ok.clear();
            }
            else
            {
                Try(i + 1);
            }
            nho[j] = 0;
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
    for (auto it : mp)
    {
        for (auto itt : it)
        {
            cout << itt;
        }
        cout << endl;
    }
}