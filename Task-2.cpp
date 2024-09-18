
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* searchBSTVal(TreeNode* root, int val) {
        // If the root is null or the root's value matches the target value then return root
        if (root == nullptr || root->val == val) {
            return root;
        }

        // If the value is smaller than the root's value, So val is searching in the left subtree
        if (val < root->val) {
            return searchBSTVal(root->left, val);
        }

        // If the value is greater than the root's value, So val is searching  in the right subtree
        return searchBSTVal(root->right, val);
    }
};

// Time Complexity: O(n), n is the number of node
// Space Complexity: O(h), h is the height of a binary tree