#include <map>
using namespace std;

class Solution
{
public:
    map<int, int> counting;
    ListNode *head = new ListNode();
    ListNode *current = nullptr;

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr)
        {
            return l2;
        }
        if (l2 == nullptr)
        {
            return l1;
        }
        for (int i = -100; i != 101; i++)
        {
            counting[i] = 0;
        }

        while (l1->next)
        {
            counting[l1->val]++;
            l1 = l1->next;
        }
        counting[l1->val]++;

        while (l2->next)

        {
            counting[l2->val]++;
            l2 = l2->next;
        }
        counting[l2->val]++;
        current = head;
        for (auto iter = counting.begin(); iter != counting.end(); iter++)
        {
            if (iter->second >= 1)
            {
                for (int i = 0; i < iter->second; i++)
                {
                    ListNode *new_node = new ListNode();
                    new_node->val = iter->first;
                    current->next = new_node;
                    current = current->next;
                }
            }
        }
        current = head;
        head = head->next;
        delete current;
        return head;
    }
};