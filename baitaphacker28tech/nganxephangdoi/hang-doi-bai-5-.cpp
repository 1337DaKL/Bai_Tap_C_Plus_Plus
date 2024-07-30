#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> ve;
    queue<string> qu;
    qu.push("8");
    while (!qu.empty())
    {
        string it = qu.front();
        qu.pop();
        if (it.size() > 18)
        {
            break;
        }
        ve.push_back(it);
        qu.push(it + "0");
        qu.push(it + "8");
    }
    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        for (auto it : ve)
        {
            if (stoll(it) % x == 0)
            {
                cout << it << endl;
                break;
            }
        }
    }
}