#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int parentheses_count = 0;
    int square_count = 0;
    int curly_count = 0;

    bool isValid(string s)
    {
        vector<string> order;
        for (string::iterator it = s.begin(); it != s.end(); it++)
        {
            switch (*it)
            {
            case '(':
                parentheses_count += 1;
                order.push_back("(");
                break;

            case '[':
                square_count += 1;
                order.push_back("[");

                break;
            case '{':
                curly_count += 1;
                order.push_back("{");
                break;
            case ')':
                if (order.size() == 0)
                {
                    return false;
                }
                if (order[order.size() - 1] != "(")
                {
                    return false;
                }
                parentheses_count -= 1;
                order.pop_back();
                break;
            case ']':
                if (order.size() == 0)
                {
                    return false;
                }
                if (order[order.size() - 1] != "[")
                {
                    return false;
                }
                square_count -= 1;
                order.pop_back();

                break;
            case '}':
                if (order.size() == 0)
                {
                    return false;
                }
                if (order[order.size() - 1] != "{")
                {
                    return false;
                }
                curly_count -= 1;
                order.pop_back();

                break;
            }
        }
        if (parentheses_count == 0 && square_count == 0 && curly_count == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
main()
{
    Solution A;
    cout << A.isValid("({");
}
