#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<string> st;
    for (auto it : s)
    {
        string itt = "";
        itt += it;
        if (itt == "+" || itt == "-" || itt == "*" || itt == "/")
        {
            string top2 = st.top();
            st.pop();
            string top1 = st.top();
            st.pop();
            string ok = "(" + top1 + itt + top2 + ")";
            st.push(ok);
        }
        else
        {
            st.push(itt);
        }
    }
    cout << st.top() << endl;
}