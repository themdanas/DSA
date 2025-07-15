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
    ListNode *reverse(ListNode *head){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr || k<=1) return head;
        int index=0;
        
        ListNode* curr=head;
        
        while(curr && index<k){
            curr=curr->next;
            index++;
        }
        
        if(index==k){
            
        
        
            ListNode* prev=nullptr;
            curr=head;
            int i=0;
            
            while(curr && i<k){
                ListNode* next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                i++;
            }
        
            if(k%index>1){
                head->next=curr;
            }
            else{
                head->next=reverseKGroup(curr,k);
            }
            
            return prev;
        
        }
        
        return head;
    }
};