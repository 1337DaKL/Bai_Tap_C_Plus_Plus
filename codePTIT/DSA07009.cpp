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
        stack<string> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            string tmp = string(1, s[i]);
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                string top2 = st.top();
                st.pop();
                string top1 = st.top();
                st.pop();
                string tmpp = '(' + top2 + tmp + top1 + ')';
                st.push(tmpp);
            }
            else
            {
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}