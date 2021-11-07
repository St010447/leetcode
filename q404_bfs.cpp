
#include <vector>
#include <iostream>
using namespace std;

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
    // TreeNode *head = nullptr;
    vector<TreeNode *> leftQueue;
    vector<TreeNode *> rightQueue;
    vector<TreeNode *> keep;
    int num;
    int sum = 0;
    int sumOfLeftLeaves(TreeNode *root)
    {
        keep.push_back(root);
        while (keep.size() > 0)
        {
            num = keep.size() - 1;
            if (keep[num]->left)
            {
                if (!keep[num]->left->left && !keep[num]->left->right)
                {
                    sum += keep[num]->left->val;
                }
            }
            if (keep[num]->left)
            {
                keep.insert(keep.begin(), keep[num]->left);
            }
            num = keep.size() - 1;
            if (keep[num]->right)
            {
                keep.insert(keep.begin(), keep[num]->right);
            }
            keep.pop_back();
        }
        return sum;
    }
};
int main()
{
    TreeNode *head = new TreeNode(3);
    TreeNode *n1 = new TreeNode(9);
    TreeNode *n2 = new TreeNode(20);
    TreeNode *n3 = new TreeNode(15);
    TreeNode *n4 = new TreeNode(7);

    head->left = n1;
    head->right = n2;
    n2->left = n3;
    n2->right = n4;
    Solution A;
    cout << A.sumOfLeftLeaves(head);
    return 0;
}
