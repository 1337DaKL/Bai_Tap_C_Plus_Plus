#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue<int> que;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cout << que.size() << endl;
        }
        else if (x == 2)
        {
            if (que.empty())
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
        else if (x == 3)
        {
            int y;
            cin >> y;
            que.push(y);
        }
        else if (x == 4)
        {
            if (!que.empty())
            {
                que.pop();
            }
        }
        else if (x == 5)
        {
            if (que.empty())
                cout << -1 << endl;
            else
            {
                cout << que.front() << endl;
            }
        }
        else
        {
            if (que.empty())
                cout << -1 << endl;
            else
            {
                vector<int> ve;
                while (!que.empty())
                {
                    ve.push_back(que.front());
                    que.pop();
                }
                cout << *ve.rbegin() << endl;
                for (auto it : ve)
                {
                    que.push(it);
                }
            }
        }
    }
}