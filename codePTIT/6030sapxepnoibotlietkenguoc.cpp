#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (auto &it : a)
            cin >> it;
        vector<vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int check = 1;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    check = 0;
                }
            }
            if (check == 0)
            {
                vector<int> ok;
                for (auto it : a)
                {
                    ok.push_back(it);
                }
                mp.push_back(ok);
                ok.clear();
            }
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
}