#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
        cin >> it;
    int tong = 0;
    map<int, int> mp;
    bool check = true;
    for (auto it : a)
    {
        mp[it]++;
        int tra = it - 25;
        for (auto itt = mp.rbegin(); itt != mp.rend(); itt++)
        {
            while (tra >= (*itt).first && (*itt).second > 0)
            {
                tra -= (*itt).first;
                (*itt).second--;
            }
        }
        if (tra > 0)
        {
            check = false;
            break;
        }
    }
    if (check)
        cout << "YES";
    else
        cout << "NO";
}