#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    stack<int> mp;
    while (cin >> s)
    {
        if (s == "push")
        {
            int x;
            cin >> x;
            mp.push(x);
        }
        if (s == "show")
        {
            if (mp.size() == 0)
            {
                cout << "empty\n";
            }
            else
            {
                vector<int> ok;
                while (mp.size() >= 1)
                {
                    ok.push_back(mp.top());
                    mp.pop();
                }
                for (auto it = ok.rbegin(); it != ok.rend(); it++)
                {
                    cout << *it << " ";
                }
                for (auto it = ok.rbegin(); it != ok.rend(); it++)
                {
                    mp.push(*it);
                }
                cout << endl;
            }
        }
        if (s == "pop")
        {
            mp.pop();
        }
    }
}