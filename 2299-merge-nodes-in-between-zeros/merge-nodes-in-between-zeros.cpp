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
    // i think memory leak will happen
    ListNode* mergeNodes(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        ListNode* ans = head;
        ans = head;
        while (temp->next != NULL) {
            temp = temp->next;
            count += temp->val;
            if (temp->val == 0) {
                ans->val = count;
                ans->next = temp->next;
                ans = ans->next;
                count = 0;
            }
        }
        return head;
    }
};