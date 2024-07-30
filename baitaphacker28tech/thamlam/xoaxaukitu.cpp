#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> mp;
    int dem = 0;
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '1')
        {
            dem++;
        }
        else
        {
            if (dem != 0)
                mp.push_back(dem);
            dem = 0;
        }
    }
    sort(mp.begin(), mp.end(), greater<int>());
    int cnt = 0;
    for (int i = 0; i < mp.size(); i += 2)
    {
        cnt += mp[i];
    }
    cout << cnt << endl;
}