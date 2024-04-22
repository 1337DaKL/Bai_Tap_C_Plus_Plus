#include <bits/stdc++.h>
using namespace std;
string nhi;
int m, ok;
void khoitao()
{
    nhi = "";
    for (int i = 0; i < m; i++)
    {
        nhi += "0";
    }
}
void sinh()
{
    int i = nhi.size() - 1;
    while (i >= 0 && nhi[i] == '1')
    {
        nhi[i] = '0';
        i--;
    }
    if (i == -1)
    {
        ok = 0;
    }
    else
    {
        nhi[i] = '1';
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int dd = pow(2, n);
        string xau[dd + 5];
        xau[1] = "0";
        xau[2] = "1";
        if (n > 1)
        {
            int mid = 2;
            for (int i = 2; i <= n; i++)
            {
                int l = pow(2, i);
                for (int j = 1; j <= mid; j++)
                {
                    xau[l - j + 1] = "1" + xau[j];
                    xau[j] = "0" + xau[j];
                }
                mid = l;
            }
        }
        int dem = 0;
        for (int i = 1; i <= dd; i++)
        {
            dem++;
            if (xau[i] == s)
            {
                break;
            }
        }
        ok = 1;
        m = n;
        khoitao();
        int cnt = 0;
        while (ok)
        {
            cnt++;
            if (dem == cnt)
            {
                cout << nhi << endl;
                break;
            }
            sinh();
        }
    }
}