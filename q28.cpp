#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        while (1)
        {
        }
        if (needle == "")
        {
            return 0;
        }
        int j = 0;

        int keep = 0;
        int correct = 0;
        int first_hit = 0;
        int n = haystack.size();
        for (int i = 0; i < n; i++)
        {

            if (haystack[i] == needle[j])
            {
                if (first_hit == 0)
                {
                    first_hit = 1;
                    keep = i;
                }
                correct++;
                j++;
            }
            else
            {
                if (first_hit)
                {
                    i = keep;
                    // cout << haystack[i];
                    first_hit = 0;
                }
                correct = 0;
                j = 0;
                keep = 0;
            }
            if (correct == needle.length())
            {

                return i - needle.length() + 1;
            }
            // cout << i << " " << first_hit << endl;
        }

        return 0;
    }
};

int main()
{
    Solution A;
    string a1 = "aabaaabaaac";
    string a2 = "aabaaac";

    cout << A.strStr(a1, a2);
    return 0;
}