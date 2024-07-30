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
        for (auto it : s)
        {
            string tmp = string(1, it);
            if (it == '+' || it == '-' || it == '*' || it == '/')
            {
                string top2 = st.top();
                st.pop();
                string top1 = st.top();
                st.pop();
                st.push(tmp + top1 + top2);
            }
            else
            {
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}