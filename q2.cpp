/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <vector>
using namespace std;
class Solution
{
public:
    int k1 = 1;
    int k2 = 1;
    int t1 = 0;
    int t2 = 0;
    int total = 0;
    vector<int> rev_total;
    ListNode *list_head1 = new ListNode();
    ListNode *list_head2 = new ListNode();

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        do
        {
            list_head1 = l1;
            if (l1->next)
            {
                t1 += l1->val * k1;
                k1 *= 10;
            }
            else
            {
                t1 = 0;
            }
        }

        while (l1->next);

        do
        {
            list_head2 = l2;
            if (l2->next)
            {
                t2 += l2->val * k2;
                k2 *= 10;
            }
            else
            {
                t2 = 0;
            }
        }

        while (l2->next);
        total = t1 + t2;
        while (total / 10 != 0)
        {
        }

        return;
    }
};