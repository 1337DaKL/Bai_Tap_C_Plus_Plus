#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            dem++;
        }
        if (s[i] == '(')
        {
            break;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '(')
        {
            dem++;
        }
        if (s[i] == ')')
        {
            break;
        }
    }
    cout << dem << endl;
}