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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * temp1=headA;
        ListNode* temp2=headB;
        int count1,count2;
        count1=count2=0;
        while(temp1!=NULL){
            count1++;
            temp1=temp1->next;
        }
        
        while(temp2!=NULL){
            count2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(count1>count2){
            while(count1 != count2){
                temp1=temp1->next;
                count1--;
            }
        }else{
            while(count2 != count1){
                temp2=temp2->next;
                count2--;
            }
            
        }
        while(temp2 != NULL){
            if(temp1 == temp2){
                return temp1;
            }else{
                temp1=temp1->next;
                temp2=temp2->next;
            }       
        }
        return NULL;
    }
};