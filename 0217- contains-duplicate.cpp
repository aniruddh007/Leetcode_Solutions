"""
problem link : https://leetcode.com/problems/contains-duplicate/
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
Example 1:
Input: nums = [1,2,3,1]
Output: true
"""
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = 0 ;
        
        map<int,int> dup;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (dup.find(nums[i]) == dup.end()){
                
                dup[nums[i]] = 0;
            }
                
            else{
                return true;    
            }
            
        }
        return false;
    }
};
