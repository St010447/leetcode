
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
    TreeNode *current = nullptr;
    int sumNumbers(TreeNode *root)
    {
        int value = 0;
        current = root;
        if (root)
        {
            value = root->val;
        }
        while (current->left)
        {
            value += current->val;
            value *= 10;
        }
        return 0;
    }
};