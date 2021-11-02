class Solution
{
public:
    int bs(vector<int> &nums, int target, int begin, int end)
    {
        if (nums[(begin + end) / 2] == target)
        {
            return (begin + end) / 2;
        }
        else if (nums[(begin + end) / 2] > target)
        {
            if (end - begin >= 1)
            {
                return bs(nums, target, begin, (begin + end) / 2 - 1);
            }
            else
            {
                if (nums[(begin + end) / 2] > target)
                {
                    return (begin + end) / 2;
                }
                else
                {
                    return (begin + end) / 2 + 1;
                }
            }
        }
        else
        {
            if (end - begin >= 1)
            {
                return bs(nums, target, (begin + end) / 2 + 1, end);
            }
            else
            {
                if (nums[(begin + end) / 2] > target)
                {
                    return (begin + end) / 2;
                }
                else
                {
                    return (begin + end) / 2 + 1;
                }
            }
        }
    }
    int searchInsert(vector<int> &nums, int target)
    {
        return bs(nums, target, 0, nums.size() - 1);
    }
};