#include <vector>
using namespace std;
class Solution
{
public:
    vector<int>::iterator it;
    int removeElement(vector<int> &nums, int val)
    {
        for (it = nums.begin(); it != nums.end(); it++)
        {
            if (*it == val)
            {
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};