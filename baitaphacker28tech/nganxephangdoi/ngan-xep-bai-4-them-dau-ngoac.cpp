#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> st;
    int dem = 0;
    for (auto it : s)
    {
        if (it == '(')
        {
            st.push(it);
        }
        else
        {
            if (st.empty())
                dem++;
            else
            {
                st.pop();
            }
        }
    }
    dem += st.size();
    cout << dem << endl;
}