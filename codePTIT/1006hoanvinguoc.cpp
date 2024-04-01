#include <bits/stdc++.h>
using namespace std;
int n, a[1000], ok;
vector<string> mp;
void khoitao()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (a[j] < a[i])
            j--;
        swap(a[j], a[i]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        ok = 1;
        khoitao();
        while (ok)
        {
            string nana = "";
            for (int i = 1; i <= n; i++)
            {
                nana = nana + to_string(a[i]);
            }
            mp.push_back(nana);
            sinh();
        }
        for (auto it = mp.rbegin(); it != mp.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        mp.clear();
    }
}