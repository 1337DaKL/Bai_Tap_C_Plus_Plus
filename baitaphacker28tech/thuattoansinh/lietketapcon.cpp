#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[100], b[100], ok = 1, n;

void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
        b[i] = i;
    }
}

void sinh()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        a[i] = 1;
    }
}

int main()
{
    cin >> n;
    khoitao();
    vector<string> mp;
    while (ok)
    {
        string s = "";
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == 1)
            {
                string l = to_string(b[i]);
                s += l;
            }
        }
        if (s != "")
        {
            mp.push_back(s);
        }
        sinh();
    }
    sort(mp.begin(), mp.end());
    for (auto it : mp)
    {
        for (auto itt : it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
    return 0;
}
