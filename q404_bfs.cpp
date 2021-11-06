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
    vector<int *> nodeStack;
    TreeNode *head = nullptr;
    int sumOfLeftLeaves(TreeNode *root)
    {
        if (!head)
        {
            head = root;
            nodeStack.push_back(head);
            cout << nodeStack[0];
        }
    }
};
