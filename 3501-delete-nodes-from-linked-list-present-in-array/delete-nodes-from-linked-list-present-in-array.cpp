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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s(nums.begin(), nums.end());
        int n = nums.size();
        ListNode* temp = head;
        ListNode* prev = head;

        while (temp!= NULL) {
            int num = temp->val;
            if (s.find(num) != s.end()) {
                if (head == temp) {
                    head = head->next;
                } else {
                    prev->next = temp->next;
                }
            }else
                prev=temp;
            temp = temp->next;
        }
        return head;
    }
};