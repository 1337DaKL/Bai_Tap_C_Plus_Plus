#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> mp;
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            mp.push(s[i]);
        }
        else
        {
            if (mp.size() == 0)
            {
                dem++;
            }
            else
            {
                mp.pop();
            }
        }
    }
    cout << dem << endl;
}