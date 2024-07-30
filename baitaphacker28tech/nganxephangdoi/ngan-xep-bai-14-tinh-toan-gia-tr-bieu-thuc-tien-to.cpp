#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tinhtoan(ll top1, ll top2, char x)
{
    if (x == '+')
        return top1 + top2;
    if (x == '-')
        return top1 - top2;
    if (x == '*')
        return top1 * top2;
    return top1 / top2;
}
int main()
{
    string s;
    cin >> s;
    stack<ll> st;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            ll top1 = st.top();
            st.pop();
            ll top2 = st.top();
            st.pop();
            st.push(tinhtoan(top1, top2, s[i]));
        }
        else
        {
            st.push(s[i] - '0');
        }
    }
    cout << st.top() << endl;
}