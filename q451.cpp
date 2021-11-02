#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
// using std::ostream cout;
using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

class Solution
{
public:
    map<char, int> map1;
    map<char, int>::iterator it;
    map<int, string> count;
    map<int, string>::reverse_iterator it2;
    string ans;
    string frequencySort(string s)
    {
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            map1[s[i]]++;
        }
        for (it = map1.begin(); it != map1.end(); it++)
        {
            count[it->second] += it->first;
        }

        for (it2 = count.rbegin(); it2 != count.rend(); it2++)
        {
            for (int j = 0; j < it2->second.size(); j++)
            {
                for (int i = 0; i < it2->first; i++)
                {
                    ans.push_back(it2->second[j]);
                }
            }
        }

        return ans;
    }
};
int main()
{
    Solution A;
    cout << A.frequencySort("bcaacccdd");
    return 0;
}
