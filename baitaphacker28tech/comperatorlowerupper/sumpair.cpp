#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int A[N];
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    sort(A, A + N);

    int countPairs = 0;
    for (int i = 0; i < N; ++i)
    {
        int target = A[i] + K;

        // Tìm vị trí đầu tiên của target trong mảng sắp xếp
        int low = lower_bound(A, A + N, target) - A;

        // Tìm vị trí cuối cùng của target trong mảng sắp xếp
        int high = upper_bound(A, A + N, target) - A;

        // Số lượng cặp có độ chênh lệch bằng K là high - low
        countPairs += (high - low);

        // Loại trừ trường hợp i trùng với low hoặc high
        if (K == 0)
            countPairs--;
    }

    // Kết quả
    cout << countPairs / 2 << endl; // Mỗi cặp được đếm hai lần, nên chia 2
    return 0;
}
