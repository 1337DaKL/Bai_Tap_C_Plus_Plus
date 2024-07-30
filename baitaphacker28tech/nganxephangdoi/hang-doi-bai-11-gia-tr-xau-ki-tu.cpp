#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        string s;
        cin >> n >> s;
        priority_queue<long long> qu;
        map<char, long long> mp;
        for (auto it : s)
        {
            mp[it]++;
        }
        for (auto it : mp)
        {
            qu.push(it.second);
        }
        while (n--)
        {
            if (qu.empty())
                break;
            long long x = qu.top();
            qu.pop();
            x--;
            qu.push(x);
        }
        long long tong = 0;
        while (!qu.empty())
        {
            tong = tong + pow(qu.top(), 2);
            qu.pop();
        }
        cout << tong << endl;
    }
}