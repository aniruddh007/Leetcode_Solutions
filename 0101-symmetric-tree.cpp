"""
problem link : https://leetcode.com/problems/symmetric-tree/
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Example 1:
Input: root = [1,2,2,3,4,4,3]
Output: true
"""
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
class Solution {
public:
    bool checkSymmetry(TreeNode* l, TreeNode* r) {
        if(l == nullptr || r == nullptr)
            return l == r;
        
        if(l->val != r->val) return false;
        
        // Check left's left subtree symm with right's right and vice versa
        // MIRROR Property
        
        return checkSymmetry(l->left, r->right) && checkSymmetry(l->right, r->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return checkSymmetry(root->left, root->right);
    }
};
