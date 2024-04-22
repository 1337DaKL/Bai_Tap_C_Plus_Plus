#include <bits/stdc++.h>
using namespace std;
int n, s, p;
int nguyento[100], ii = 0;
bool checknt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

void taonguyento()
{
    for (int i = 2; i <= 200; i++)
    {
        if (checknt(i))
        {
            nguyento[ii] = i;
            ii++;
        }
    }
}
void khoitao()
{
    cin >> n >> p >> s;
}
vector<string> mp;
void Try(int pos, int cnt, int tong, vector<int> v)
{
    if (cnt > n || tong > s)
    {
        return;
    }
    if (cnt == n && tong == s)
    {
        string ss = "";
        for (auto it : v)
        {
            ss += to_string(it);
            ss += " ";
        }
        mp.push_back(ss);
        return;
    }
    for (int i = pos; i <= ii; i++)
    {
        v.push_back(nguyento[i]);
        Try(i + 1, cnt + 1, tong + nguyento[i], v);
        v.pop_back();
    }
}
int main()
{
    int test;
    cin >> test;
    taonguyento();
    while (test--)
    {
        khoitao();
        mp.clear();
        int pp;
        for (int i = 0; i <= ii; i++)
        {
            if (nguyento[i] > p)
            {
                pp = i;
                break;
            }
        }
        vector<int> v;
        Try(pp, 0, 0, v);
        cout << mp.size() << endl;
        sort(mp.begin(), mp.end());
        for (auto it : mp)
        {
            cout << it << endl;
        }
        cout << endl;
    }
}