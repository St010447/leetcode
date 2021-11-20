#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int begin = 0;
        int end = nums.size() - 1;
        int mid;
        while (1)
        {
            mid = (begin + end) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (target > nums[end] || target < nums[begin])
            {
                break;
            }

            else if (nums[mid] > target)
            {
                end = mid - 1;
                continue;
            }
            else
            {
                begin = mid + 1;
                continue;
            }
        }
        return -1;
    }
};