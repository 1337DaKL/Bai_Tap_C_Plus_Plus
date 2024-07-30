#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int s, t;
        cin >> s >> t;
        queue<pair<int, int>> qu;
        set<int> se;
        qu.push({s, 0});
        se.insert(s);
        while (!qu.empty())
        {
            auto it = qu.front();
            qu.pop();
            if (it.first == t)
            {
                cout << it.second << endl;
                break;
            }
            if (it.first - 1 == t || it.first * 2 == t)
            {
                cout << it.second + 1 << endl;
                break;
            }
            if (it.first > 0 && se.count(it.first - 1) == 0)
            {
                se.insert(it.first - 1);
                qu.push({it.first - 1, it.second + 1});
            }
            if (it.first < t && se.count(it.first * 2) == 0)
            {
                se.insert(it.first * 2);
                qu.push({it.first * 2, it.second + 1});
            }
        }
    }
}