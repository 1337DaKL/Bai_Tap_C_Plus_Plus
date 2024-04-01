#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if (a.find(b) != string::npos)
        cout << "YES";
    else
        cout << "NO";
}