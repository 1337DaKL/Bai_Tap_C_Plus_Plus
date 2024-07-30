#include <bits/stdc++.h>
using namespace std;
int ok(int x, int y, char c)
{
    if (c == '/')
        return x / y;
    if (c == '*')
        return x * y;
    if (c == '+')
        return x + y;
    if (c == '-')
        return x - y;
    if (c == '^')
        return x ^ y;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        stack<int> st;
        for (auto it : s)
        {
            if (it == '+' || it == '-' || it == '*' || it == '/' || it == '^')
            {
                int top1 = st.top();
                st.pop();
                int top2 = st.top();
                st.pop();
                st.push(ok(top2, top1, it));
            }
            else
            {
                st.push(it - '0');
            }
        }
        cout << st.top() << endl;
    }
}