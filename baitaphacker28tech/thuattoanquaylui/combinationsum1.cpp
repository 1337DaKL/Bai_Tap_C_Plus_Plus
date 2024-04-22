#include <bits/stdc++.h>
using namespace std;
vector<string> mp;
vector<int> ok;
int a[1000], w, k;
;
bool check = true;
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= 9 - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            int tong = 0;
            string s = "";
            for (int t = 1; t <= k; t++)
            {
                tong += a[t];
                s += char('0' + a[t]);
                if (t != k)
                {
                    s += ' + ';
                }
            }
            if (tong == w)
            {
                mp.push_back(s);
                check = false;
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
    cin >> w >> k;
    Try(1);
    sort(mp.begin(), mp.end());
    if (check)
    {
        cout << "NOT FOUND " << endl;
    }
    else
    {
        for (auto it : mp)
        {
            int dem = 0;
            for (auto itt : it)
            {
                dem++;
                if (dem < it.size())
                {
                    cout << itt << " + ";
                }
                else
                {
                    cout << itt << endl;
                }
            }
        }
    }
}