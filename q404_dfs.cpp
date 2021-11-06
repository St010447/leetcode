
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int sum = 0;
    TreeNode *head = nullptr;
    bool checkRight = false;

    int sumOfLeftLeaves(TreeNode *root)
    {
        if (!head)
        {
            head = root;
        }
        if (root->left)
        {
            checkRight = false;
            sumOfLeftLeaves(root->left);
        }
        if (!root->left && !root->right)
        {
            if (checkRight == false)
            {
                if (root != head)
                {
                    sum += root->val;
                }
            }
        }
        if (root->right)
        {
            checkRight = true;
            sumOfLeftLeaves(root->right);
        }
        return sum;
    }
};