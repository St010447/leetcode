class Solution
{
public:
    ListNode *first = nullptr;
    ListNode *current = nullptr;

    ListNode *deleteDuplicates(ListNode *head)
    {
        current = head;
        first = head;
        while (current != nullptr)
        {

            current = first->next;
            if (current->val == first->val)
            {
                first->next = current->next;
                delete current;
            }
            else
            {
                first = current;
            }
            current = first->next;
        }
        return head;
    }
};