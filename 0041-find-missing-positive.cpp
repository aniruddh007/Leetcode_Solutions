"""
problem link : https://leetcode.com/problems/first-missing-positive/

Given an unsorted integer array nums, return the smallest missing positive integer.
You must implement an algorithm that runs in O(n) time and uses constant extra space.

Example 1:
Input: nums = [1,2,0]
Output: 3

Example 2:
Input: nums = [3,4,-1,1]
Output: 2
"""
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
        
            if(nums[i]>0){
              
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(),ans.end());
        
        int res=1;
        
        for(int i = 1 ; i < ans.size() ; i++){
          if(ans[i]!=ans[res-1]){
             ans[res]=ans[i];
             res++; 
          }
        }
        int count=1;
        for(int i=0;i<ans.size();i++){
            if(count==ans[i]){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};
