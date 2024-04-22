#include <bits/stdc++.h>
using namespace std;
int n, k;
string s;
void Try(int pos, int cnt, vector<char> mp)
{
    if (cnt == k)
    {
        for (auto it : mp)
        {
            cout << it;
        }
        cout << endl;
        return;
    }
    for (int i = pos; i < n; i++)
    {
        mp.push_back(s[i]);
        Try(i, cnt + 1, mp);
        mp.pop_back();
    }
}
int main()
{
    cin >> n >> k;
    cin >> s;
    vector<char> mp;
    Try(0, 0, mp);
}