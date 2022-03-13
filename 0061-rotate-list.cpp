"""
problem link : https://leetcode.com/problems/rotate-list/
Given the head of a linked list, rotate the list to the right by k places.

Example 1:
Input: head = [1,2,3,4,5] , k = 2
Output: [4,5,1,2,3]
"""
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* rotateRight(ListNode* head, int k) {
       ///calculate lenth///////////////
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        if(n==0) return NULL;
        ////////////////////////////
        k=k%n;// reduce k under the length of the list
      ////////////////////////////////use loops to insert last element of list at the front of list  
          temp=head;
          ListNode* start=head;
      while(k--){
          ListNode* pre;
          while(temp->next){
              pre=temp;
              temp=temp->next;
          }
          temp->next=start;
          pre->next=NULL;
          start=temp;
      }
    ////////////////////////////////return the start of list
        return start;
    }
};
