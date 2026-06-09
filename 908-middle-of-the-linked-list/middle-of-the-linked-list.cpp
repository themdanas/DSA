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
    ListNode* middleNode(ListNode* head) {
      //ListNode* head =nullptr;
      ListNode* temp = head;

      int cnt=0;

      while(temp!=0){
        cnt++;
        temp=temp->next;
      }

      int midnode= cnt/2 +1;

      temp = head;

      while (temp!=0){
        midnode=midnode-1;
        if(midnode==0) break;
        temp=temp->next;
      }

      return temp;
    }
};