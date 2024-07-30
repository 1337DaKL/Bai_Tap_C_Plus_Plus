#include <bits/stdc++.h>
using namespace std;
int cap(char x)
{
    if (x == '^')
        return 5;
    if (x == '*' || x == '/')
        return 4;
    if (x == '+' || x == '-')
        return 3;
    return 1;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        stack<char> st;
        string s;
        string res = "";
        cin >> s;
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
                if (!st.empty() && cap(st.top()) >= cap(it))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(it);
            }
            else
            {
                res += it;
            }
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