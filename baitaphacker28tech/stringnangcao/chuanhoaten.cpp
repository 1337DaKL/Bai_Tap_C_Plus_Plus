#include <bits/stdc++.h>
using namespace std;
string chuanHoaTen(string s)
{
    string ok = "";
    stringstream ss(s);
    string m;
    while (ss >> m)
    {
        m[0] = toupper(m[0]);
        for (int i = 1; i < m.size(); i++)
        {
            m[i] = tolower(m[i]);
        }
        ok = ok + m + " ";
    }
    return ok;
}
string chuanHoaNgaySinh(string s)
{
    if (s[2] != '/')
        s = "0" + s;
    if (s[5] != '/')
        s.insert(3, "0");
    return s;
}
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << chuanHoaTen(a) << endl
         << chuanHoaNgaySinh(b);
}