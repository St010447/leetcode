#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int zerocount = 0;
        vector<int> temp;
        int n = digits.size();
        for (int i = n - 1 ; i >= 0; i--)
        {
            if (digits[i] == 9)
            {
                zerocount++;
                digits.pop_back();
                if (i - 1 >= 0)
                {
                    plusOne(digits);
                }
                else if (i - 1 < 0)
                {
                    digits.insert(digits.begin(), 1);
                }
                break;
            }
            else
            {
                digits[i] += 1;
                cout << i << digits[i];
                break;
            }
        }
        for (int i = 0; i < zerocount; i++)
        {
            digits.push_back(0);
        }
        return digits;
    }
};

int main()
{
    Solution A;
    vector<int> a = {9, 9};
    A.plusOne(a);
    return 0;
}