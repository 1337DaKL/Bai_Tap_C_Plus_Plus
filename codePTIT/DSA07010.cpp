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
            if (tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/")
            {
                string top1 = st.top();
                st.pop();
                string top2 = st.top();
                st.pop();
                string ok = top1 + top2 + tmp;
                st.push(ok);
            }
            else
            {
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}