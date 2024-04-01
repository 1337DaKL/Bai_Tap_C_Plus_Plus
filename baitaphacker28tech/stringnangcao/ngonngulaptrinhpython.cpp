#include <bits/stdc++.h>
#include <string>
using namespace std;
bool okk(string s)
{
    string ok = "";
    int a1, a2, a3, a4, a5, a6;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'p')
        {
            ok += s[i];
            a1 = i;
            break;
        }
    }
    for (int i = a1; i < s.size(); i++)
    {
        if (s[i] == 'y')
        {
            ok += s[i];
            a2 = i;
            break;
        }
    }
    for (int i = a2; i < s.size(); i++)
    {
        if (s[i] == 't')
        {
            ok += s[i];
            a3 = i;
            break;
        }
    }
    for (int i = a3; i < s.size(); i++)
    {
        if (s[i] == 'h')
        {
            ok += s[i];
            a4 = i;
            break;
        }
    }
    for (int i = a4; i < s.size(); i++)
    {
        if (s[i] == 'o')
        {
            ok += s[i];
            a5 = i;
            break;
        }
    }
    for (int i = a5; i < s.size(); i++)
    {
        if (s[i] == 'n')
        {
            ok += s[i];
            a6 = i;
            break;
        }
    }
    if (ok == "python")
        return true;
    return false;
}
int main()
{
    string ss;
    cin >> ss;
    if (okk(ss))
        cout << "YES\n";
    else
        cout << "NO\n";
}