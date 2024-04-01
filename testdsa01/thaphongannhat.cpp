#include <iostream>
#include <stack>
#include <vector>

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

    stack<int> s;
    for (int i = 0; i < N; ++i)
    {
        while (!s.empty() && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            cout << "0 ";
        }
        else
        {
            cout << s.top() + 1 << " ";
        }
        s.push(i);
    }

    return 0;
}
