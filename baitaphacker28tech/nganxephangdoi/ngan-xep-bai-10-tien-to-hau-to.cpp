#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<string> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        string it = "";
        it += s[i];
        if (it == "+" || it == "-" || it == "*" || it == "/")
        {
            string top1 = st.top();
            st.pop();
            string top2 = st.top();
            st.pop();
            string ok = "" + top1 + top2 + it;
            st.push(ok);
        }
        else
        {
            st.push(it);
        }
    }
    cout << st.top() << endl;
}