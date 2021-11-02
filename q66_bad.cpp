
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        int temp = 0;
        vector<int> ans;
        if (n = 1)
        {
            if (digits[0] + 1 > 10)
            {
                ans.push_back((digits[0] + 1) / 10);
                ans.push_back((digits[0] + 1) % 10);
            }
            else
            {
                ans.push_back(digits[0] + 1);
            }
            return ans;
        }
        for (int i = 0; i < n; i++) //還原
        {
            temp *= 10;
            temp += digits[i];
        }
        temp += 1;  //plus one

    }
};