#include <string>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
private:
       int pre_value = 0;
    int value = 0;
    int total = 0;
    vector<int> toValue;
    vector<int>::iterator it;

public:
    int romanToInt(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case 'I':
                value = 1;
                break;

            case 'V':
                value = 5;
                break;
            case 'X':
                value = 10;
                break;
            case 'L':
                value = 50;
                break;
            case 'C':
                value = 100;
                break;
            case 'D':
                value = 500;
                break;
            case 'M':
                value = 1000;
                break;
            }
            toValue.push_back(value);
        }
        for (it = toValue.begin(); it != toValue.end(); it++)
        {
            if (pre_value < *it)
            {
                total -= pre_value;
                pre_value = *it;
            }
            else
            {
                total += pre_value;
                pre_value = *it;
            }
        }
        total += toValue.at(toValue.size() - 1);
        return total;
    }
};
