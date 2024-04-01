#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> mp;
        for (auto it : s)
        {
            mp.push_back(it - '0');
        }
        int i = mp.size() - 1;
        while (i >= 0 && mp[i] == 1)
        {
            mp[i] = 0;
            i--;
        }
        if (i >= 0)
        {
            mp[i] = 1;
        }
        for (int ii = 0; ii < mp.size(); ii++)
        {
            cout << mp[ii];
        }
        cout << endl;
    }
    return 0;
}
