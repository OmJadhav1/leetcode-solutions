/**
 *Definition for singly-linked list.
 *struct ListNode {
 *  int val;
 *  ListNode * next;
 *  ListNode() : val(0), next(nullptr) {}
 *  ListNode(int x) : val(x), next(nullptr) {}
 *  ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        void insertAtTail(ListNode* &tail, int d)
        {
            ListNode *temp = new ListNode(d);
            tail->next = temp;
            tail = temp;
        }

    ListNode* oddEvenList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        vector<int> odd, even;
        ListNode *curr = head;
        int count = 1;
        while (curr != NULL)
        {
            if (count % 2 == 0)
            {
                even.push_back(curr->val);
            }
            else
            {
                odd.push_back(curr->val);
            }
            curr = curr->next;
            count++;
        }
        ListNode *tail = new ListNode(odd[0]);
        ListNode *ans = tail;
        for (int x: odd)
        {
            insertAtTail(tail, x);
        }
        for (int x: even)
        {
            insertAtTail(tail, x);
        }
        return ans->next;
    }
};