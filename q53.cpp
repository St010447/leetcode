#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int max_count = 0;

        int n = nums.size();
        if (n == 1)
        {
            return nums[0];
        }
        for (int i = 0; i < nums.size(); i++)
        {

            sum = sum + nums[i];
            if (sum < 0)
            {
                sum = 0;
            }

            max_count = max(max_count, sum);
        }
        if (max_count == 0 && n > 0)
        {
            max_count = nums[0];
            for (int i = 0; i < nums.size(); i++)
            {
                max_count = max(max_count, nums[i]);
            }
        }
        return max_count;
    }
};
main()
{
    Solution A;
    vector<int> b = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << A.maxSubArray(b);
    return 0;
}