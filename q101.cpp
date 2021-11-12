/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        TreeNode *p = root->left;
        TreeNode *g = root->right;
        if (p->val)
        {

            if (p->val != g->val)
            {
                return false;
            }
            else
            {
                if (isSymmetric(root->left))
                {
                    return isSymmetric(root->right);
                }
            }
        }
        return true;
    }
};

// 不可以瑟瑟