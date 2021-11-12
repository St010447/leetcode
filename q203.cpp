
//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *cur = nullptr;
        ListNode *pre_cur = nullptr;
        cur = head;

        if (cur)
        {
            while (cur)
            {
                if (cur->val == val)
                {
                    if (pre_cur)
                    {
                        pre_cur->next = cur->next;
                        delete cur;
                        cur = pre_cur->next;
                        continue;
                    }
                    else
                    {
                        head = cur->next;
                        delete cur;
                        cur = head;
                        continue;
                    }
                }
                else
                {
                    if (cur->next)
                    {
                        pre_cur = cur;
                        cur = cur->next;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            return {};
        }
        return head;
    }
};