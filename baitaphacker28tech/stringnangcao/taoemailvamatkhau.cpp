#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    map<string, int> ii;
    cin.ignore();
    while (test--)
    {
        string s;
        getline(cin, s);
        vector<string> mp;
        stringstream ss(s);
        string m;
        while (ss >> m)
        {
            for (auto &it : m)
                it = tolower(it);
            mp.push_back(m);
        }
        vector<string> a;
        string b;
        int dem = 0;
        for (auto it : mp)
        {
            dem++;
            if (dem == mp.size())
                b = it;
            else
                a.push_back(it);
        }
        string ok = "";
        auto kk = a.rbegin();
        ok = ok + (*kk);
        int cnt = 0;
        for (auto it : a)
        {
            cnt++;
            if (cnt != a.size())
                ok += it[0];
        }
        ii[ok]++;
        if (ii[ok] == 1)
        {
            cout << ok << "@xyz.edu.vn" << endl;
        }
        else
        {
            cout << ok << ii[ok] << "@xyz.edu.vn" << endl;
        }
        for (int i = 0; i < b.size(); i++)
        {
            if (!(i == 3 && b[3] == '0') && !(i == 0 && b[i] == '0') && b[i] != '/')
                cout << b[i];
        }
        cout << endl;
    }
}