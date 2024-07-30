#include <iostream>
#include <string>
#include <cstdint>

using namespace std;

// Hàm kiểm tra xem số có nằm trong phạm vi từ 32-bit đến 64-bit không
bool is_valid_number(const string &str)
{
    if (str.empty())
        return false;
    try
    {
        uint64_t number = stoull(str);
        return (number > 2147483647 && number <= 9223372036854775807ULL);
    }
    catch (const out_of_range &)
    {
        return false;
    }
}

int main()
{
    string line;
    uint64_t total_sum = 0;

    while (getline(cin, line))
    {
        string number_str;
        for (char c : line)
        {
            if (isdigit(c))
            {
                number_str += c; // Xây dựng chuỗi số
            }
            else
            {
                if (!number_str.empty())
                {
                    // Khi gặp ký tự không phải số, kiểm tra chuỗi số đã tích lũy
                    if (is_valid_number(number_str))
                    {
                        total_sum += stoull(number_str);
                    }
                    number_str.clear();
                }
            }
        }
        // Kiểm tra chuỗi số cuối cùng nếu có
        if (!number_str.empty() && is_valid_number(number_str))
        {
            total_sum += stoull(number_str);
        }
    }

    cout << total_sum << endl;
    return 0;
}
