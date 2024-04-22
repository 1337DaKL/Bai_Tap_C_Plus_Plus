#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int x;
            cin >> x;
            mp.push(x);
        }
        if (s == "POP")
        {
            if (mp.size() != 0)
            {
                mp.pop();
            }
        }
        if (s == "PRINT")
        {
            if (mp.size() == 0)
            {
                cout << "NONE\n";
            }
            else
            {
                cout << mp.top() << endl;
            }
        }
    }
}