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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp, *res = NULL, *prev = NULL;
        ListNode *a = reverse(l1);
        ListNode *b = reverse(l2);
        int sum, carry = 0;
        while(a || b){
            sum = carry + (a ? a->val : 0) + (b ? b->val : 0);
            if(sum >= 10)
                carry = 1;
            else
                carry = 0;
            sum = sum % 10;
            temp = new ListNode(sum);
            if(res == NULL)
                res = temp;
            else
                prev->next = temp;
            prev = temp;
            if(a)
                a = a->next;
            if(b)
                b = b->next;
        }
        if(carry > 0){
            temp = new ListNode(1);
            prev->next = temp;
        }
        return reverse(res);
    }
    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL, *curr = head, *next;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};