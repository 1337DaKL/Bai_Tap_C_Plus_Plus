#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (auto it : s)
    {
        if (st.empty())
            st.push(it);
        else
        {
            if (it == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(it);
            }
        }
    }
    if (st.empty())
    {
        cout << "EMPTY\n";
    }
    else
    {
        string ok = "";
        while (!st.empty())
        {
            ok += st.top();
            st.pop();
        }
        for (int i = ok.size() - 1; i >= 0; i--)
        {
            cout << ok[i];
        }
    }
}