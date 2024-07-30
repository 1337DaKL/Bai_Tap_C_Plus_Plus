#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long x;
        cin >> x;
        queue<string> qu;
        qu.push("1");
        int dem = 0;
        while (!qu.empty())
        {
            string it = qu.front();
            qu.pop();
            if (stoll(it) < x)
                dem++;
            else
                break;
            qu.push(it + "0");
            qu.push(it + "1");
        }
        cout << dem << endl;
    }
}