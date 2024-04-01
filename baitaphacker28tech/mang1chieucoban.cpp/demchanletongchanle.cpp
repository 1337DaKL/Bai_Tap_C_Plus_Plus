#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int demchan = 0, demle = 0, tongchan = 0, tongle = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            demchan++;
            tongchan += x;
        }
        else
        {
            demle++;
            tongle += x;
        }
    }
    cout << demchan << endl
         << demle << endl
         << tongchan << endl
         << tongle << endl;
}