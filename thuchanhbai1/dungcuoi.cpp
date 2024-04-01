#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// Hàm tạo các từ khác nhau từ các từ trong xâu ban đầu
set<string> generateCombinations(vector<string> words)
{
    set<string> combinations;
    int n = words.size();
    for (int i = 1; i < (1 << n); ++i)
    {
        string combination = "";
        for (int j = 0; j < n; ++j)
        {
            if (i & (1 << j))
            {
                combination += words[j];
            }
        }
        combinations.insert(combination);
    }
    return combinations;
}

int main()
{
    int N;
    cin >> N;

    vector<string> words(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> words[i];
    }

    // Tạo và in ra các từ khác nhau tạo được
    set<string> combinations = generateCombinations(words);
    for (const string &combination : combinations)
    {
        cout << combination << endl;
    }

    return 0;
}
