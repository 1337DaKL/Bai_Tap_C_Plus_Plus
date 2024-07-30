#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    queue<string> qe;
    qe.push("1");
    while (!qe.empty())
    {
        i++;
        string it = qe.front();
        qe.pop();
        cout << it << " ";
        if (i == n)
        {
            break;
        }
        qe.push(it + "0");
        qe.push(it + "1");
    }
}