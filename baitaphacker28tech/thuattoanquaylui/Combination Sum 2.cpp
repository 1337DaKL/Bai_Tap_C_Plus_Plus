#include <bits/stdc++.h>
using namespace std;
int nto[100];
int n, k;
vector<string> ok;
bool checksonguyento(int n)
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
int j = 0;
void taonguyento()
{
    for (int i = 2; i <= 500; i++)
    {
        if (checksonguyento(i))
        {
            nto[j] = i;
            j++;
        }
    }
}
void Try(int pos, int cnt, int tong, vector<int> mp)
{
    if (cnt == k && tong == n)
    {
        string s = "";
        for (int i = 0; i < mp.size() - 1; i++)
        {
            s += to_string(mp[i]);
            s += " + ";
        }
        s += mp[mp.size() - 1];
        ok.push_back(s);
    }
    if (tong > n || cnt > k)
    {
        return;
    }
    for (int i = pos; i < j; i++)
    {
        mp.push_back(nto[i]);
        Try(i + 1, cnt + 1, tong + nto[i], mp);
        mp.pop_back();
    }
}
int main()
{
    cin >> n >> k;
    vector<int> mp;
    Try(0, 0, 0, mp);
    if (ok.size() == 0)
    {
        cout << "NOT FOUND";
    }
    else
    {
        for (auto it : ok)
        {
            cout << it << endl;
        }
    }
}