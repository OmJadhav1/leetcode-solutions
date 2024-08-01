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
        //nikal means dont stay in list
        //reh means stay in list
        set<int> s(nums.begin(), nums.end());
        int n = nums.size();
        ListNode* nikal = head;
        ListNode* reh = head;

        while (nikal!= NULL) {
            if(s.find(nikal->val)!= s.end()){
                if(nikal==head){
                    head=head->next;
                    nikal=head;
                    reh=head;
                }else{
                    reh->next=nikal->next;
                    nikal=nikal->next;
                }
            }else{
                reh=nikal;
                nikal=nikal->next;
            }
        }
        return head;
    }
};