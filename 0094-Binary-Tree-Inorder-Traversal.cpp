"""
problem link : https://leetcode.com/problems/binary-tree-inorder-traversal/
Given the root of a binary tree, return the inorder traversal of its nodes' values.
Example :
Input: root = [1,null,2,3]
Output: [1,3,2]
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> arr;
        stack<TreeNode *> s;
        struct TreeNode *temp = root;
        while(temp!=NULL || s.empty()==false){
            while(temp!=NULL){
                s.push(temp);
                temp = temp -> left;
            }
            temp = s.top();
            s.pop();
            arr.push_back( temp -> val );
            temp = temp -> right;
        }
        return arr;
    }
};
