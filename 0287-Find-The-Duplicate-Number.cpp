""" 
  problem link : https://leetcode.com/problems/find-the-duplicate-number/description/
  Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
Example 1:
Input: nums = [1,3,4,2,2]
Output: 2
  
Example 2:
Input: nums = [3,1,3,4,2]
Output: 3
  
Example 3:
Input: nums = [3,3,3,3,3]
Output: 3
"""
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
		// Sort the given array in ascending order 
        sort( nums.begin() , nums.end() ) ;
		
        for( int i = 0 ; i < nums.size() ; i++ ){
            
			// Check wether two consecutive numbers are same if yes return number 
            if( nums[i] == nums[i + 1]){
                return nums[i];
            }
        }        
		// Return 0 if the no number is repeated 
        return 0 ;
    }
};
