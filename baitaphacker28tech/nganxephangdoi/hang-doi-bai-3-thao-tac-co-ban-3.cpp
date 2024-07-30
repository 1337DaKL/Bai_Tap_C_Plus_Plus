#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> de;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "PUSHFRONT")
        {
            int x;
            cin >> x;
            de.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (de.empty())
            {
                cout << "NONE\n";
            }
            else
            {
                cout << de.front() << endl;
            }
        }
        else if (s == "POPFRONT")
        {
            if (!de.empty())
            {
                de.pop_front();
            }
        }
        else if (s == "PUSHBACK")
        {
            int x;
            cin >> x;
            de.push_back(x);
        }
        else if (s == "PRINTBACK")
        {
            if (de.empty())
            {
                cout << "NONE\n";
            }
            else
            {
                cout << de.back() << endl;
            }
        }
        else
        {
            if (!de.empty())
            {
                de.pop_back();
            }
        }
    }
}