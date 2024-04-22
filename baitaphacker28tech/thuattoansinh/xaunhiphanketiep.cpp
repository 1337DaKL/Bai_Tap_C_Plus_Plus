#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        i == '0';
        i--;
    }
    if (i < 0)
    {
        for (int i = 0; i < s.size(); i++)
        {
            cout << 0;
        }
        return 0;
    }
    else
    {
        s[i] = '1';
    }
    cout << s << endl;
}