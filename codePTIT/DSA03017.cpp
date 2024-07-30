#include <bits/stdc++.h>
using namespace std;
bool check(pair<char, int> a, pair<char, int> b)
{
    return a.second < b.second;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        string s;
        cin >> n >> s;
        map<char, int> mp;
        for (auto it : s)
        {
            mp[it]++;
        }
        priority_queue<int> ue;
        for (auto it : mp)
        {
            ue.push(it.second);
        }
        while (n--)
        {
            int ok = ue.top();
            ue.pop();
            ok--;
            ue.push(ok);
        }
        int tong = 0;
        while (!ue.empty())
        {
            tong += pow(ue.top(), 2);
            ue.pop();
        }
        cout << tong << endl;
    }
}