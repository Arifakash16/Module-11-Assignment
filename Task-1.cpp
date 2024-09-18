// Definition for a binary tree node. 
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // Function to compute the height of the tree
    int height(TreeNode* root) 
    {

        // if the tree is empty, then return 0
        if (root == nullptr) {
            return 0;
        }

        int leftHeight = height(root->left); // find the height of a left subtree
        int rightHeight = height(root->right); // find the height of a right subtree
        
        // Return 1 + maximum of left and right subtree heights
        return 1 + max(leftHeight, rightHeight);
    }
};

// Time Complexity: O(n), n is the number of node
// Space Complexity: O(h), h is the height of a binary tree