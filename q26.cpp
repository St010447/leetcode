#include <vector>
#include <map>
#include <iostream>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int expectedNums = nums.size();
        int Duplicates_count = 0;
        map<int, int> content;

        for (int i = 0; i < expectedNums; i++)
        {
            if (!content[nums.at(i)])
            {
                content[nums.at(i)] = 1;
            }
            else if (content[nums.at(i)])
            {
                Duplicates_count++;
            }
        }
        vector<int> new_array;
        for (auto iter = content.begin(); iter != content.end(); iter++)
        {

            new_array.push_back(iter->first);
        }
        return new_array.size();
    }
};
int main()
{
    vector<int> tmp;
    tmp.push_back(1);
    tmp.push_back(1);
    tmp.push_back(2);

    Solution a;
    std::cout << a.removeDuplicates(tmp) << "\n";

    return 0;
}