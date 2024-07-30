#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll tinhtoan(ll x, ll y, char c)
{
    if (c == '+')
        return x + y;
    if (c == '-')
        return x - y;
    if (c == '*')
        return x * y;
    return x / y;
}
int main()
{
    string s;
    cin >> s;
    stack<ll> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            ll top2 = st.top();
            st.pop();
            ll top1 = st.top();
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