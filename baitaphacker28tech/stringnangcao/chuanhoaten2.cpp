#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    vector<string> mp;
    stringstream ss(s);
    string m;
    while (ss >> m)
    {
        m[0] = toupper(m[0]);
        for (int i = 1; i < m.size(); i++)
        {
            m[i] = tolower(m[i]);
        }
        mp.push_back(m);
    }
    int dem = 0;
    for (auto &it : mp)
    {
        dem++;
        if (dem == mp.size())
        {
            for (auto &itt : it)
                itt = toupper(itt);
        }
    }
    auto ok = mp.rbegin();
    int demm = 0;
    for (auto it : mp)
    {
        demm++;
        if (demm != mp.size() && demm < mp.size() - 1)
            cout << it << " ";
        if (demm == mp.size() - 1)
            cout << it;
    }
    cout << ", " << *ok << endl
         << *ok << ", ";
    int okk = 0;
    for (auto it : mp)
    {
        okk++;
        if (okk != mp.size())
            cout << it << " ";
    }
}