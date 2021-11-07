#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        reverse(nums2.begin(), nums2.end());
        int n1 = 0;
        int n2 = nums2.size();
        while (n2 != 0)
        {

            if (m == 0)
            {
                reverse(nums2.begin(), nums2.end());
                nums1 = nums2;
                break;
            }
            if (nums2[n2 - 1] <= nums1[n1])
            {
                nums1.insert(nums1.begin() + n1, nums2[n2 - 1]);
                nums1.pop_back();
                nums2.pop_back();
                n2 = nums2.size();
                m++;
                continue;
            }
            if (n1 == m - 1)
            {
                int count = nums2.size();
                for (int i = 0; i < count; i++)
                {
                    nums1.insert(nums1.begin() + m + i, nums2[n2 - 1]);
                    nums1.pop_back();
                    nums2.pop_back();
                    n2 = nums2.size();
                }
                break;
            }
            n1++;
            // n2 = nums2.size();
        }
    }
};

int main()
{
    Solution A;
    vector<int> a1 = {0, 0, 0, 0, 0};
    vector<int> a2 = {1, 2, 3, 4, 5};

    A.merge(a1, 0, a2, 5);
    return 0;
}
