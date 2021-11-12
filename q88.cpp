#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = 0;
        int j = 0;
        int count = 0;
        while (j <= n)
        {
            if (nums1.size() == 0)
            {
                nums1 = nums2;
            }
            if (nums2.size() == 0)
            {
                break;
            }
            if (nums2[j] < nums1[i])
            {
                nums1.insert(nums1.begin() + i, nums2[j++]);
                nums1.pop_back();
                count++;
            }
            if (i == m)
            {
                int keep = nums2.size() - count;
                for (int b = 0; b < keep; b++)
                {
                    nums1.insert(nums1.begin() + i, nums2[j]);
                    if (j < n)
                    {
                        j++;
                    }
                    i++;
                    m++;
                    count++;

                    nums1.pop_back();
                    if (nums2.size() - count == 0)
                    {
                        break;
                    }
                }
            }
            if (nums2.size() - count == 0)
            {
                break;
            }
            i++;
        }
    }
};

int main()
{
    Solution A;
    vector<int> a1 = {4, 0, 0, 0, 0, 0};
    vector<int> a2 = {1, 2, 3, 5, 6};

    A.merge(a1, 1, a2, 5);
    return 0;
}
