#include <bits/stdc++.h>
using namespace std;
bool ok(string s)
{
    stack<char> st;
    for (auto it : s)
    {

        if (it == ')')
        {
            bool check = true;
            char top = st.top();
            st.pop();
            while (!st.empty() && top != '(')
            {
                if (top == '*' || top == '-' || top == '+' || top == '/')
                {
                    check = false;
                }
                top = st.top();
                st.pop();
            }
            if (check == true)
            {
                return true;
            }
        }
        else
        {
            st.push(it);
        }
    }
    return false;
}
int main()
{
    string s;
    cin >> s;
    if (ok(s))
        cout << "YES";
    else
        cout << "NO";
}