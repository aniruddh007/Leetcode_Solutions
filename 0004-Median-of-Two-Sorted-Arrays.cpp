"""
problem link : https://leetcode.com/problems/median-of-two-sorted-arrays/
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Example:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
"""
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size() , m = nums2.size() ; 
        vector<int> ans(m+n);
        
        //merging both the sorted arrays in one 
        
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),ans.begin());
        
        // if the number of data is even 
        
        if((m+n)%2==0){
            
            return (float) (ans[(m+n)/2]+ans[(m+n-1)/2])/2;
        }
        //if the number of data is odd 
        
        return (float) ans[(m+n)/2];
        
    }
};
