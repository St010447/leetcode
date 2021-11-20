// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    // bool isBadVersion(int a)
    // {
    //     // return a;
    // }
    int firstBadVersion(int n)
    {
        long long int left = 1;
        long long int right = n;
        long long int mid;
        long long int ans;
        while (1)
        {
            mid = (left + right) / 2;
            if (isBadVersion(mid) == true && isBadVersion(mid - 1) == false)
            {
                ans = mid;
                break;
            }
            else if (isBadVersion(mid) == true)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};