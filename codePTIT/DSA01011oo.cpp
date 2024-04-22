#include <bits/stdc++.h>
using namespace std;
int a[100], n, ok;
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
    int test;
    cin >> test;
    while (test--)
    {
        int stt;
        cin >> stt;
        ok = 1;
        string s;
        cin >> s;
        n = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            a[i + 1] = int(s[i] - '0');
        }
        sinh();
        if (ok == 1)
        {
            cout << stt << " ";
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        else
        {
            cout << stt << " BIGGEST\n";
        }
    }
}