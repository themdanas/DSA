/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* p= head;
        ListNode* q= head;

        while(q!=0 && q->next!=0){
            p=p->next;
            q=q->next->next;

            

            if(p==q){
                ListNode *start=head;
                int index=0;

                while(p!=start){
                    start=start->next;
                    p=p->next;
                    index++;
                }

                return p;
            }


        }

        return 0;
    }
};