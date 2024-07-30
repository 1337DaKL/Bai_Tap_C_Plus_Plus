#include <bits/stdc++.h>
using namespace std;
bool checkok(char a, char b)
{
    return a == '[' && b == ']' || a == '{' && b == '}' || a == '(' && b == ')';
}
bool check(string s)
{
    stack<char> st;
    for (auto it : s)
    {
        if (it == '(' || it == '[' || it == '{')
            st.push(it);
        else
        {
            if (st.empty())
                return false;
            if (checkok(st.top(), it))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
        return true;
    return false;
}
int main()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "YES";
    else
        cout << "NO";
}