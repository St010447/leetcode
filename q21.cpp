#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> A;
    ListNode *head = nullptr;
    ListNode *cur = nullptr;
    ListNode *new_node = new ListNode();

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        while (l1->next)
        {
            A.push_back(l1->val);
        }
        while (l2->next)
        {
            A.push_back(l2->val);
        }
        sort(A.begin(), A.end());
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i];
        }

        for (int i = 0; i < A.size(); i++)
        {
            if (head == nullptr)
            {
                new_node->val = A[i];
                head = new_node;
                cur = head;
            }
            ListNode *new_node = new ListNode();
            cur->next = new_node;
            new_node->val = A[i];
            cur = cur->next;
        }
        return head;
    }
};
