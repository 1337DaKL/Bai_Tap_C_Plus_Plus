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
        if (s == "top")
        {
            if (!st.empty())
                cout << st.top() << endl;
            else
                cout << "NONE\n";
        }
        else if (s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if (!st.empty())
        {
            st.pop();
        }
    }
}