#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<int> ans;
    string answer;
    int j = 0;
    int sum = 0;
    int carry = 0;

    int temp = 0;

    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
        {
            return "0";
        }
        ans.resize(401);
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for (int j = 0; j < num2.length(); j++)
        {
            for (int i = 0; i < num1.length(); i++)
            {
                sum = (num2[j] - '0') * (num1[i] - '0');
                ans[j + i] += sum % 10;
                if (ans[j + i] > 9)
                {
                    ans[j + i + 1] += ans[j + i] / 10;
                    ans[j + i] %= 10;
                }
                ans[j + i + 1] += sum / 10;
                if (ans[j + i + 1] > 9)
                {
                    ans[j + i + 1 + 1] += ans[j + i + 1] / 10;
                    ans[j + i + 1] %= 10;
                }
            }
        }
        while (ans[ans.size() - 1] == 0)
        {
            ans.pop_back();
        }
        for (int i = 0; i < ans.size(); i++)
        {
            answer.push_back(ans[i] + '0');
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};

int main()
{
    Solution A;
    A.multiply("0", "0");

    return 0;
}