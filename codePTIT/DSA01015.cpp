#include <bits/stdc++.h>
using namespace std;
string s = "0000000000000000009";
int n = s.size() - 1, ok = 1;
vector<string> mp;
void sinh()
{
    int i = n;
    while (i >= 0 && s[i] == '9')
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
        s[i] = '9';
    }
}
int main()
{
    while (ok)
    {
        mp.push_back(s);
        sinh();
    }
    int test;
    cin >> test;
    while (test--)
    {
        int x;
        cin >> x;
        for (auto it : mp)
        {
            if (stoll(it) % x == 0)
            {
                cout << stoll(it) << endl;
                break;
            }
        }
    }
    return 0;
}