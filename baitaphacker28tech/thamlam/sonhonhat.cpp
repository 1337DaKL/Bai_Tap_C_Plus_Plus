#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    while (n > 0)
    {
        m--;
        if (n > 9)
        {
            st.push(9);
            n -= 9;
        }
        else
        {
            st.push(n);
            break;
        }
    }
    if (m < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        if (m > 1)
        {
            int x = st.top();
            st.pop();
            st.push(x - 1);
            while (m > 1)
            {
                st.push(0);
                m--;
            }
            st.push(1);
        }
        while (st.size() > 0)
        {
            cout << st.top();
            st.pop();
        }
    }
}