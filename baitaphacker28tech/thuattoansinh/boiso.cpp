#include <bits/stdc++.h>
using namespace std;
string s = "00000000000000008";
int n, ok = 1;
void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '8')
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
        s[i] = '8';
    }
}
int main()
{
    vector<long long> mp;
    while (ok)
    {
        mp.push_back(stoll(s));
        sinh();
    }
    int test;
    cin >> test;
    while (test--)
    {
        long long g;
        cin >> g;
        for (auto it : mp)
        {
            if (it % g == 0)
            {
                cout << it << endl;
                break;
            }
        }
    }
}