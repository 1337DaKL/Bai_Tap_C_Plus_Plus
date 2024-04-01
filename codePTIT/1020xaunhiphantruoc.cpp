#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int i = s.size() - 1;
        int ok = 1;
        while (i >= 0 && s[i] == '0')
        {
            s[i] = '1';
            i--;
        }
        if (i < 0)
        {
            for (auto it : s)
                cout << 1;
            cout << endl;
        }
        else
        {
            s[i] = '0';
            for (auto it : s)
                cout << it;
            cout << endl;
        }
    }
}