#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> heights[i];
    }

    sort(heights.begin(), heights.end()); // Sắp xếp các chiều cao

    int seed_height = heights[N / 2]; // Chọn ngẫu nhiên một người làm hạt giống, ở giữa sau khi sắp xếp

    long long total_pain = 0;
    for (int i = 0; i < N; ++i)
    {
        total_pain += abs(heights[i] - seed_height); // Tính tổng sự đau đớn
    }

    cout << total_pain << endl;

    return 0;
}
