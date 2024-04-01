#include <bits/stdc++.h>
using namespace std;
bool ok(string a, string b)
{
    int sizea = a.size(), sizeb = b.size();
    if (sizea != sizeb)
        return sizea < sizeb;
    else
        return a < b;
}
int main()
{
    vector<string> mp;
    string s;
    multiset<string> mpp;
    getline(cin, s);
    stringstream ss(s);
    string m;
    while (ss >> m)
    {
        mp.push_back(m);
        mpp.insert(m);
    }
    for (auto it : mpp)
    {
        cout << it << " ";
    }
    cout << endl;
    sort(mp.begin(), mp.end(), ok);
    for (auto it : mp)
    {
        cout << it << " ";
    }
    cout << endl;
}