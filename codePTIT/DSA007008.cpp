#include <bits/stdc++.h>
using namespace std;
int cap(char c)
{
    if (c == '^')
        return 5;
    if (c == '*' || c == '/')
        return 4;
    if (c == '+' || c == '-')
        return 3;
    return 1;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        stack<char> st;
        string res = "";
        for (auto it : s)
        {
            if (it == '(')
            {
                st.push(it);
            }
            else if (it == ')')
            {
                while (st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if (it == '+' || it == '-' || it == '*' || it == '/' || it == '^')
            {
                while (!st.empty() && cap(st.top()) >= cap(it))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(it);
            }
            else
                res += it;
        }
        while (!st.empty())
        {
            if (st.top() != '(')
                res += st.top();
            st.pop();
        }
        cout << res << endl;
    }
}