"""
problem link : https://leetcode.com/problems/binary-tree-preorder-traversal/
Given the root of a binary tree, return the preorder traversal of its nodes' values.

Example 1:
Input: root = [1,null,2,3]
Output: [1,2,3]
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
    void traversal(TreeNode* root, vector<int> &v){
        if(!root){
            return;
        }
            
        v.push_back(root -> val);
        traversal(root -> left, v);
        traversal(root -> right, v);
        
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> v;
        traversal(root, v);
        return v;
        
    }
};
