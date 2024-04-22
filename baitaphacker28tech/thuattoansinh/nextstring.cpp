#include <bits/stdc++.h>
using namespace std;
int a[100000], n, ok = 1;
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] >= a[i + 1])
    {
        i--;
    }
    if (i == 0)
    {
        ok = 0;
    }
    else
    {
        int j = n;
        while (a[i] >= a[j])
        {
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        a[i + 1] = int(s[i] - '0');
    }
    n = s.size();
    sinh();
    if (ok == 0)
    {
        cout << "NOT EXIST\n";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[i];
        }
    }
}
