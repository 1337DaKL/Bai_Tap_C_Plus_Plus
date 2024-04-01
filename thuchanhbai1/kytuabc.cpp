#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> res;
void Try(string s, int cntA, int cntB, int cntC)
{
    if (s.size() <= n)
    {
        if (cntA && cntB && cntC && cntA <= cntB && cntB <= cntC)
            res.push_back(s);
        if (s.size() == n)
            return;
    }
    Try(s + 'A', cntA + 1, cntB, cntC);
    Try(s + 'B', cntA, cntB + 1, cntC);
    Try(s + 'C', cntA, cntB, cntC + 1);
}
int main()
{
    cin >> n;
    Try("", 0, 0, 0);
    sort(res.begin(), res.end(), [](string a, string b)
         {
        if(a.size() == b .size()) return a <= b;
        else return a.size() < b.size(); });
    for (auto x : res)
        cout << x << endl;
    return 0;
}