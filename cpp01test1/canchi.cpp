#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = n % 10;
    if (m == 0)
        cout << "CANH ";
    else if (m == 1)
        cout << "TAN ";
    else if (m == 2)
        cout << "NHAM ";
    else if (m == 3)
        cout << "QUY ";
    else if (m == 4)
        cout << "GIAP ";
    else if (m == 5)
        cout << "AT ";
    else if (m == 6)
        cout << "BINH ";
    else if (m == 7)
        cout << "DINH ";
    else if (m == 8)
        cout << "MAU ";
    else if (m == 9)
        cout << "KY ";
    int ok = n - 1980;
    if (ok % 12 == 0)
        cout << "THAN";
    else if (ok % 12 == 1)
        cout << "DAU";
    else if (ok % 12 == 2)
        cout << "TUAT";
    else if (ok % 12 == 3)
        cout << "HOI";
    else if (ok % 12 == 4)
        cout << "TY";
    else if (ok % 12 == 5)
        cout << "SUU";
    else if (ok % 12 == 6)
        cout << "DAN";
    else if (ok % 12 == 7)
        cout << "MAO";
    else if (ok % 12 == 8)
        cout << "THIN";
    else if (ok % 12 == 9)
        cout << "TI";
    else if (ok % 12 == 10)
        cout << "NGO";
    else if (ok % 12 == 11)
        cout << "MUI";
}