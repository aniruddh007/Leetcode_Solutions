"""
  problem link : https://leetcode.com/problems/palindrome-number/
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.
 
Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
  """
class Solution {
public:
    bool isPalindrome(int x) {
        
        int num = 0 ;
        
        int a = x ;
        
        while( a > 0 ){
            
            int p = a % 10 ;
            a = a / 10 ;
            if(num > INT_MAX/10 || num < INT_MIN/10){
                return false;
            }
            else{
                num = num  * 10 + p ;    
            }
            
        }
        
        if( x == num){
            return true ;
        }
        else{
            return false ;
        }
        
    }
};
