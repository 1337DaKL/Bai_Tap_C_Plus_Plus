#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue<int> qe;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "PUSH")
        {
            int x;
            cin >> x;
            qe.push(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (!qe.empty())
            {
                cout << qe.front() << endl;
            }
            else
                cout << "NONE\n";
        }
        else
        {
            if (!qe.empty())
            {
                qe.pop();
            }
        }
    }
}