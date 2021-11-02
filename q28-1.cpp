#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle == "")
        {
            return 0;
        }
        if (haystack.find(needle) >= 0)
            return haystack.find(needle);
        else
            return -1;
    }
};

main()
{
    Solution A;
    cout << endl
         << A.strStr("a",
                     "a");
}