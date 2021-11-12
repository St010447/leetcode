#include <vector>
#include <algorithm>
<<<<<<< HEAD
#include <iostream>
=======
>>>>>>> 79aeef7c541e2bbcd464551e9f4fdf196950c556
using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
<<<<<<< HEAD
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
=======
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
>>>>>>> 79aeef7c541e2bbcd464551e9f4fdf196950c556
        }
    }
};

int main()
{
    Solution A;
<<<<<<< HEAD
    vector<int> a1 = {4, 0, 0, 0, 0, 0};
    vector<int> a2 = {1, 2, 3, 5, 6};

    A.merge(a1, 1, a2, 5);
=======
    vector<int> a1 = {0, 0, 0, 0, 0};
    vector<int> a2 = {1, 2, 3, 4, 5};

    A.merge(a1, 0, a2, 5);
>>>>>>> 79aeef7c541e2bbcd464551e9f4fdf196950c556
    return 0;
}
