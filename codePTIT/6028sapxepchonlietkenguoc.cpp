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
    for (int i = 0; i < n - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[pos])
            {
                pos = j;
            }
        }
        swap(a[pos], a[i]);
        vector<int> ok;
        for (auto it : a)
        {
            ok.push_back(it);
        }
        mp.push_back(ok);
        ok.clear();
    }
    int dem = mp.size();
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        cout << "Buoc " << dem-- << ": ";
        for (auto itt : *it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}