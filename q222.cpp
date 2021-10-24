
class Solution
{
public:
    int count = 0;
    int countNodes(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }
        count++;
        if (root->left)
        {
            countNodes(root->left);
        }
        if (root->right)
        {
            countNodes(root->right);
        }
        return count;
    }
};
