#include <bits/stdc++.h>
using namespace std;

string s = "()[]{}";
int n;
bool e = 1;
bool check(vector<char> mp)
{
    stack<char> st;
    for (auto it : mp)
    {
        if (it == '(' || it == '[' || it == '{')
        {
            st.push(it);
        }
        else
        {
            if (st.empty())
                return false;
            char x = st.top();
            st.pop();
            if ((x == '(' && it != ')') || (x == '[' && it != ']') || (x == '{' && it != '}'))
            {
                return false;
            }
        }
    }
    return st.empty();
}

void backtrack(int pos, vector<char> mp)
{
    if (pos == n)
    {
        if (check(mp))
        {
            e = 0;
            for (auto it : mp)
            {
                cout << it;
            }
            cout << " ";
        }
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        mp.push_back(s[i]);
        backtrack(pos + 1, mp);
        mp.pop_back();
    }
}

int main()
{
    cin >> n;
    vector<char> mp;
    backtrack(0, mp);
    if (e)
    {
        cout << "NOT FOUND";
    }
    return 0;
}
