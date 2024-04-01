#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    vector<vector<int>> mp;
    vector<int> ok;
    ok.push_back(a[0]);
    mp.push_back(ok);
    ok.clear();
    for (int i = 1; i < n; i++)
    {
        int pos = i - 1, okk = a[i];
        while (pos >= 0 && a[pos] > okk)
        {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = okk;
        for (int j = 0; j < i + 1; j++)
        {
            ok.push_back(a[j]);
        }
        mp.push_back(ok);
        ok.clear();
    }
    int dem = mp.size();
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        cout << "Buoc " << dem-- - 1 << ": ";
        for (auto itt : *it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}