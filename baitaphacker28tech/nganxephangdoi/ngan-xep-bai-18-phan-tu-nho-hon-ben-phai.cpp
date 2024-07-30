#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (auto &it : a)
        cin >> it;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[i] < a[st.top()])
        {
            b[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        b[st.top()] = -1;
        st.pop();
    }
    for (auto it : b)
    {
        cout << it << " ";
    }
}