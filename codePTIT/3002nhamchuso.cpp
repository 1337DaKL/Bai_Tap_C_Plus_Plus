#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string nn, mm;
    cin >> nn >> mm;
    for (auto &it : nn)
    {
        if (it == '6')
        {
            it = '5';
        }
    }
    for (auto &it : mm)
    {
        if (it == '6')
        {
            it = '5';
        }
    }
    ll ok1 = 0, ok2 = 0;
    for (auto it : nn)
    {
        ok1 = ok1 * 10 + (int)(it - '0');
    }
    for (auto it : mm)
    {
        ok2 = ok2 * 10 + (int)(it - '0');
    }
    cout << ok1 + ok2 << " ";
    for (auto &it : nn)
    {
        if (it == '5')
        {
            it = '6';
        }
    }
    for (auto &it : mm)
    {
        if (it == '5')
        {
            it = '6';
        }
    }
    ll ok3 = 0, ok4 = 0;
    for (auto it : nn)
    {
        ok3 = ok3 * 10 + (int)(it - '0');
    }
    for (auto it : mm)
    {
        ok4 = ok4 * 10 + (int)(it - '0');
    }
    cout << ok4 + ok3 << endl;
}