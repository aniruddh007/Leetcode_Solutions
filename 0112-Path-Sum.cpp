"""
problem link : https://leetcode.com/problems/path-sum/
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.
A leaf is a node with no children.

Example 1:
Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
Explanation: The root-to-leaf path with the target sum is shown.
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
	bool hasPathSum(TreeNode* root, int targetSum) {
		if(!root) return false;
		if(targetSum == root->val and root->left == NULL and root->right == NULL) return true;
		bool left = hasPathSum(root->left, targetSum-(root->val));
		if(left) return left;
		bool right = hasPathSum(root->right, targetSum-(root->val));
		if(right) return true;
		return false;
	}
};
