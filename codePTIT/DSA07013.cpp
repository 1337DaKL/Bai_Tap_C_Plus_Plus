#include <bits/stdc++.h>
using namespace std;
int tinhtoan(int x, int y, char z)
{
    if (z == '+')
        return x + y;
    if (z == '-')
        return x - y;
    if (z == '*')
        return x * y;
    if (x == '/')
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
        for (auto it : s)
        {
            if (it == '+' || it == '-' || it == '*' || it == '/')
            {
                int top2 = st.top();
                st.pop();
                int top1 = st.top();
                st.pop();
                int t = tinhtoan(top1, top2, it);
                st.push(t);
            }
            else
            {
                st.push(it - '0');
            }
        }
        cout << st.top() << endl;
    }
}