#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        stack<int> mp;
        string s;
        cin >> s;
        int cnt = 0;
        for (auto it : s)
        {
            if (it == '[')
                mp.push(it);
            else
            {
                if (mp.size() == 0)
                {
                    cnt++;
                }
                else
                {
                    mp.pop();
                }
            }
        }
        cout << cnt + mp.size() << endl;
    }
}