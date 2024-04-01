#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a)
    {
        cin >> it;
    }
    int buoc = 1;
    for (int i = 0; i < n; i++)
    {
        int check = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                check = 0;
                swap(a[j], a[j + 1]);
            }
        }
        if (check == 0)
        {
            cout << "Buoc " << buoc << ": ";
            for (auto it : a)
                cout << it << " ";
            cout << endl;
            buoc++;
        }
    }
}