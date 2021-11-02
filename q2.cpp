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
    ListNode *head = nullptr;
    ListNode *temp = nullptr;

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        head = l1;
        int sum = 0;
        bool carry = false;
        while (l1 && l2)
        {
            sum = l1->val + l2->val;
            if (carry == true)
            {
                sum += 1;
            }
            if (sum > 9)
            {
                carry = true;
                sum %= 10;
            }
            else
            {
                carry = false;
            }
            l1->val = sum;
            temp = l1;
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l2)
        {
            temp->next = l2;
            l1 = temp->next;
        }
        while (carry)
        {
            if (l1 == nullptr)
            {
                ListNode *newnode = new ListNode(0);
                temp->next = newnode;
                l1 = newnode;
            }
            l1->val += 1;
            if (l1->val > 9)
            {
                l1->val %= 10;
            }
            else
            {
                carry = 0;
            }
            temp = l1;
            l1 = l1->next;
        }
        return head;
    }
};
