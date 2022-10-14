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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow = head, *fast = head;
        if(head->next == NULL)
            return NULL;
        if(head->next->next == NULL) {
            ListNode *temp = head->next;
            head->next = NULL;
            delete(temp);
            return head;
        }
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *temp = slow->next;
        slow->val = temp->val;
        slow->next = temp->next;
        delete(temp);
        return head;
    }
};