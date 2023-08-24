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
        ListNode* reverse(ListNode* &head)
        {
            ListNode *curr = head;
            ListNode *prev = NULL;
            ListNode *forw = NULL;

            while (curr != NULL)
            {
                forw = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forw;
            }

            return prev;
        }

    void insertAtTail(ListNode* &tail, int d)
    {
        ListNode *temp = new ListNode(d);
        tail->next = temp;
        tail = temp;
    }

    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int sum, carry, add;
        sum = carry = add = 0;
        ListNode *tail = new ListNode(0);
        ListNode *head = tail;
        ListNode *revl1 = (l1);
        ListNode *revl2 = (l2);

        while (!(revl1 == NULL && revl2 == NULL))
        {
            if (revl1 == NULL)
            {
                sum = revl2->val + carry;
            }
            else if (revl2 == NULL)
            {
                sum = revl1->val + carry;
            }
            else
            {
                sum = revl1->val + revl2->val + carry;
            }
            carry = 0;
            if (sum > 9)
            {
                add = sum % 10;
                sum /= 10;
                carry = sum;
                insertAtTail(tail, add);
            }
            else
            {
                insertAtTail(tail, sum);
            }

            if (revl1 == NULL)
            {
                revl2 = revl2->next;
            }
            else if (revl2 == NULL)
            {
                revl1 = revl1->next;
            }
            else
            {
                revl1 = revl1->next;
                revl2 = revl2->next;
            }
        }
        if (carry != 0)
        {
            insertAtTail(tail, carry);
        }
        return head->next;
    }
};