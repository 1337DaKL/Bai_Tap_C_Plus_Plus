#include <bits/stdc++.h>
using namespace std;
int n, ok;
string s;
void khoitao()
{
    s = "";
    for (int i = 1; i <= n; i++)
    {
        s += '0';
    }
}
void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
    {
        s[i] = '1';
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string ma;
        cin >> ma;
        n = ma.size();
        ok = 1;
        khoitao();
        int dem = 0;
        while (ok)
        {
            dem++;
            if (ma == s)
            {
                break;
            }
            sinh();
        }
        int m = ma.size();
        int dd = pow(2, m);
        string ss[dd + 5];
        ss[1] = "0";
        ss[2] = "1";
        if (m > 1)
        {
            int mid = 2;
            for (int i = 2; i <= m; i++)
            {
                int l = pow(2, i);
                for (int j = 1; j <= mid; j++)
                {
                    ss[l - j + 1] = "1" + ss[j];
                    ss[j] = "0" + ss[j];
                }
                mid = l;
            }
        }
        cout << ss[dem] << endl;
    }
}