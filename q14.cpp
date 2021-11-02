#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        bool complete = false;
        int n = strs.size();
        if (n == 1)
        {
            return strs[0];
        }
        sort(strs.begin(), strs.end());

        // 排序完  比較第一項及最後一項
        string last = strs[n - 1];
        int j = last.length(); //最後一項字數

        for (int i = 0; i < j; i++)
        {
            if (last[i] != strs[0][i])
            {

                return strs[0].substr(0, i);
            }
            if (i == j - 1)
            {
                if (strs[0].length() >= last.length())
                {
                    return last;
                    break;
                }
                else
                {
                    return strs[0];
                }
            }
        }
        return "";
    }
};
int main()
{
    Solution A;
    vector<string> v = {"c", "c"};

    cout << A.longestCommonPrefix(v);
    return 0;
}