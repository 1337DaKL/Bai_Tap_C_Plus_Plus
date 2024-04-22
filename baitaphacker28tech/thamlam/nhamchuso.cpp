#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll lonnhat(string a, string b)
{
    for (auto &it : a)
    {
        if (it == '5')
        {
            it = '6';
        }
    }
    for (auto &it : b)
    {
        if (it == '5')
        {
            it = '6';
        }
    }
    return stoll(a) + stoll(b);
}
ll nhonhat(string a, string b)
{
    for (auto &it : a)
    {
        if (it == '6')
        {
            it = '5';
        }
    }
    for (auto &it : b)
    {
        if (it == '6')
        {
            it = '5';
        }
    }
    return stoll(a) + stoll(b);
}
int main()
{
    string x, y;
    cin >> x >> y;
    cout << lonnhat(x, y) << " " << nhonhat(x, y) << endl;
}