#include <bits/stdc++.h>
using namespace std;
int n, a[1000];
multiset<vector<int>> ok;
bool found = 0;
void Try(int pos, int tong, vector<int> mp)
{
    if (tong % 2 == 1 && mp.size() != 0)
    {
        ok.insert(mp);
        found = 1;
    }
    for (int i = pos; i < n; i++)
    {
        mp.push_back(a[i]);
        Try(i + 1, tong + a[i], mp);
        mp.pop_back();
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> mp;
    Try(0, 0, mp);
    if (found)
    {
        for (auto it : ok)
        {
            for (auto itt : it)
            {
                cout << itt << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout
            << "NOT FOUND";
    }
}