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
                if (st.size() == 0)
                {
                    dem++;
                }
                else
                {
                    st.pop();
                }
            }
        }

        cout << dem + st.size() << endl;
    }
}