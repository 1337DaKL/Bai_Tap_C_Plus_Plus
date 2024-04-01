#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int max_common_divisor(vector<int> &arr)
{
    int maxval = *max_element(arr.begin(), arr.end());
    vector<int> freq(maxval + 1, 0);
    for (int num : arr)
    {
        freq[num]++;
    }

    for (int i = maxval; i > 0; i--)
    {
        int multiples = 0;
        for (int j = i; j <= maxval; j += i)
        {
            multiples += freq[j];
            if (multiples >= 2)
            {
                return i;
            }
        }
    }
    return 1;
}

int main()
{
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }
    cout << max_common_divisor(arr) << endl;
    return 0;
}
