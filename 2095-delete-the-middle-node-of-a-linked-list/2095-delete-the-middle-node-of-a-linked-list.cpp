/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* deleteMiddle(ListNode *head)
        {
            if(head->next == NULL){
                return NULL;
            }
            ListNode *slow = head;
            ListNode *fast = head;
            ListNode *temp = head;
            while (fast->next != NULL)
            {
                temp=slow;
                slow = slow->next;
                if (fast->next->next == NULL)
                {
                    break;
                }
                else
                {
                    fast = fast->next->next;
                }
            }
            temp->next=slow->next;
            slow->next=NULL;
            delete(slow);
            return head;
        }
};