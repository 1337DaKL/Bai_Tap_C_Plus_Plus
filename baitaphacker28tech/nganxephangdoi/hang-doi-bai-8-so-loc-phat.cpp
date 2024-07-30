#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<string> ve;
        queue<string> qu;
        qu.push("6");
        qu.push("8");
        while (!qu.empty())
        {
            string it = qu.front();
            qu.pop();
            if (it.size() > n)
                break;
            ve.push_back(it);
            qu.push(it + "6");
            qu.push(it + "8");
        }
        for (auto it = ve.rbegin(); it != ve.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}