"""
problem link : https://leetcode.com/problems/integer-to-roman/
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 
12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
Example 1:

Input: num = 3
Output: "III"
Explanation: 3 is represented as 3 ones.
"""
class Solution {
public:
    string intToRoman(int num) {
        string n = "";
        if (num >= 1000) {
            return "M" + intToRoman(num-1000);
        } else if (num >= 900) {
            return "CM" + intToRoman(num-900);
        } else if (num >= 500){
            return "D" + intToRoman(num-500);
        } else if (num >= 400){
            return "CD" + intToRoman(num-400);
        } else if (num >= 100){
            return "C" + intToRoman(num-100);
        } else if (num >= 90){
            return "XC" + intToRoman(num-90);
        } else if (num >= 50){
            return "L" + intToRoman(num-50);
        } else if (num >= 40){
            return "XL" + intToRoman(num-40);
        } else if (num >= 10){
            return "X" + intToRoman(num-10);
        } else if (num >= 9){
            return "IX" + intToRoman(num-9);
        } else if (num >= 5){
            return "V" + intToRoman(num-5);
        } else if (num >= 4){
            return "IV" + intToRoman(num-4);
        }else if (num >= 1){
            return "I" + intToRoman(num-1);
        } else {
            return "";
        }
        return n;
    }
        
};
