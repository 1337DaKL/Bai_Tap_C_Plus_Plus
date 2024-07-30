#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> st;
    string s;
    while (cin >> s)
    {
        stringstream ss(s);
        string m;
        while (ss >> m)
        {
            st.push(m);
        }
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}