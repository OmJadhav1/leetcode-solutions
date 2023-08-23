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
        //in this approach we stored all nodes of ll1 in set
        //and search for common node in ll2
        set<ListNode*> s;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1 != NULL){
            
            s.insert(temp1);
            temp1=temp1->next;
        }
        
        while(temp2!=NULL){
            if(s.find(temp2) != s.end()){
                return temp2;
            }
            temp2=temp2->next;
        }
        return NULL;
    }
};