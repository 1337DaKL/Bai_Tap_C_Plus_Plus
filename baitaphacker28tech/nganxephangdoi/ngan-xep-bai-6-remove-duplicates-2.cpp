#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;
    cin >> s >> x;
    stack<int> st;
    stack<int> wait;
    for (auto it : s)
    {
        if (st.size() < x - 1)
        {
            st.push(it);
        }
        else
        {
            while (st.top() == it)
            {
                wait.push(st.top());
                st.pop();
                if (wait.size() == x - 1)
                {
                    break;
                }
            }
            if (wait.size() != x - 1)
            {
                while (!wait.empty())
                {
                    st.push(wait.top());
                    wait.pop();
                }
            }
            else
            {
                while (!wait.empty())
                {
                    wait.pop();
                }
            }
        }
    }
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