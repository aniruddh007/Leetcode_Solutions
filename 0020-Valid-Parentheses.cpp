"""
problem link : https://leetcode.com/problems/valid-parentheses/

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
 

Example 1:

Input: s = "()"
Output: true
"""
class Solution {
public:
    bool isValid(string s)
{
  map<char, char> mp;
  mp[')'] = '(';
  mp[']'] = '[';
  mp['}'] = '{';

  stack<char> bracketStack;

  for (char ch : s)
  {
    if (mp.count(ch))// true if ch is closing 
    {
      if (bracketStack.empty()) // checking opening bracket in stack 
        return false;

      char openvalue = mp[ch]; // value to ch key
      char lastopeningbracket = bracketStack.top(); // last opening bracket in stack

      if (openvalue != lastopeningbracket) 
        return false;
      else
        bracketStack.pop(); // if matched, removing, so to check the bracket before it
    }
    else // ch is opening bracket
    {
      bracketStack.push(ch);
    }
  }
  return bracketStack.empty();
}
};
