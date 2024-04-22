#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    priority_queue<int> ok;
    for (auto it : mp)
    {
        ok.push(it.second);
    }
    while (n--)
    {
        int x = ok.top();
        ok.pop();
        x--;
        if (x != 0)
        {
            ok.push(x);
        }
        if (ok.size() == 0)
        {
            break;
        }
    }
    long long tong = 0;
    while (ok.size() != 0)
    {
        int x = ok.top();
        ok.pop();
        tong += pow(x, 2);
    }
    cout << tong << endl;
}