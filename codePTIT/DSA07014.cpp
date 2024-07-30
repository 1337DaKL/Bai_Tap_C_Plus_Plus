#include <bits/stdc++.h>
using namespace std;
int tinhtoan(int x, int y, char dau)
{
    if (dau == '+')
        return x + y;
    if (dau == '-')
        return x - y;
    if (dau == '*')
        return x * y;
    return x / y;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        stack<int> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(tinhtoan(x, y, s[i]));
            }
            else
            {
                st.push(s[i] - '0');
            }
        }
        cout << st.top() << endl;
    }
}