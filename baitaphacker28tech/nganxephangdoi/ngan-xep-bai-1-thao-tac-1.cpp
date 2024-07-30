#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    stack<int> st;
    while (test--)
    {
        string s;
        cin >> s;
        if (s == "show")
        {
            if (st.empty())
                cout << "EMPTY\n";
            else
            {
                vector<int> ok;
                while (!st.empty())
                {
                    ok.push_back(st.top());
                    st.pop();
                }
                for (auto it = ok.rbegin(); it != ok.rend(); it++)
                {
                    cout << *it << " ";
                    st.push(*it);
                }
                cout << endl;
            }
        }
        else if (s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else
        {
            if (!st.empty())
                st.pop();
        }
    }
}