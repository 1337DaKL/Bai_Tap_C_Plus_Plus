#include <bits/stdc++.h>
using namespace std;
int main()
{
    int chu = 0, so = 0, kitu = 0;
    string s;
    getline(cin, s);
    for (auto it : s)
    {
        if (isalpha(it))
            chu++;
        else if (isdigit(it))
            so++;
        else
            kitu++;
    }
    cout << chu << " " << so << ' ' << kitu << endl;
}