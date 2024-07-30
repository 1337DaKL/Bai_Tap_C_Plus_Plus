#include <bits/stdc++.h>
using namespace std;
bool ok(char a, char b)
{
    return a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']';
}
bool check(string s)
{
    stack<char> st;
    for (auto it : s)
    {
        if (it == '(' || it == '[' || it == '{')
        {
            st.push(it);
        }
        else
        {
            if (st.empty())
                return false;
            if (!ok(st.top(), it))
                return false;
            else
                st.pop();
        }
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        if (check(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}