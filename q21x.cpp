#include <iostream>
using namespace std;

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *head = nullptr;
        ListNode *current = nullptr;

        if (l1 == nullptr)
        {
            return l2;
        }
        if (l2 == nullptr)
        {
            return l1;
        }
        if (l1->val >= l2->val)
        {
            head = l2;
            current = head;
            l2 = l2->next;
        }
        else if (l1->val < l2->val)
        {
            head = l1;
            current = head;
            l1 = l1->next;
        }

        cout << (l1 != nullptr || l2 != nullptr);
        while (l1 != nullptr || l2 != nullptr)
        {
            if (l1 == nullptr)
            {
                current->next = l2;
                l2 = nullptr;

                break;
            }
            if (l2 == nullptr)
            {
                current->next = l1;

                l1 = nullptr;
                break;
            }

            if (l1->val > l2->val)
            {

                if (l2->next)
                {
                    current->next = l2;
                    l2 = l2->next;
                    current = current->next;
                }
                else
                {
                    current->next = l2;
                    current = current->next;
                    current->next = l1;

                    break;
                }
            }
            else if (l1->val <= l2->val)
            {
                if (l1->next)
                {

                    current->next = l1;
                    l1 = l1->next;
                    current = current->next;
                }
                else
                {
                    current->next = l1;
                    current = current->next;
                    current->next = l2;
                    break;
                }
            }
        }
        return head;
    }
};