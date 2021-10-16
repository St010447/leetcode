#include <string>

using std::string;
class Solution
{
public:
    bool complete = 1;
    bool isPalindrome(int x)
    {
        string str = std::to_string(x);
        for (int i = 0; i < str.length() + 1 / 2, complete != 0; i++)
        {
            if (str.at(i) != str.at(str.length() - 1 - i))
            {
                complete = 0;
                return false;
            }
        }
        if (complete)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
