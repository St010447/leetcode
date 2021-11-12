class Solution
{
public:
    int arrangeCoins(int n)
    {
        int sum = 0;
        int i = 0;
        while (1)
        {
            sum += i;
            if (sum <= n && n <= sum + i + 1)
            {
                if (n == sum + i + 1)
                {
                    return i + 1;
                }
                else
                    return i;
            }
            else
                i++;
        }
    }
};