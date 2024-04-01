#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (auto &it : s)
    {
        it = toupper(it);
    }
    for (auto it : s)
        cout << it;
    cout << endl;
    for (auto &it : s)
    {
        it = tolower(it);
    }
    for (auto it : s)
        cout << it;
}