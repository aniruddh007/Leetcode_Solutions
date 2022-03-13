"""
problem link : https://leetcode.com/problems/maximum-subarray/
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.

Example :
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
"""
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans = nums[0] ;
        
        int sum = nums[0] ;
        
        for(int i = 1 ; i < nums.size(); i++ ){
            
            sum = max( sum+nums[i] , nums[i] );
            ans = max( ans , sum );
            
        }
        return ans ;
        
    }
};
