#include <map>
#include <vector>
using namespace std;
class Solution
{
public:
    map<int, int> ans;
    map<int, int>::iterator it;
    vector<int> answer;
    vector<int> singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            ans[nums[i]]++;
        }

        for (it = ans.begin(); it != ans.end(); it++)
        {
            if (it->second == 1)
            {
                answer.push_back(it->first);
            }
        }
        return answer;
    }
};