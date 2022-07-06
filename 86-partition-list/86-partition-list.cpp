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
    ListNode* partition(ListNode* head, int x) {
        ListNode *l = new ListNode;
        ListNode *r = new ListNode;
        ListNode *lt = l, *rt = r;
        while(head){
            if(head->val < x){
                if(l == NULL){
                    l = head;
                    l->next = lt;
                }
                else{
                    lt->next = head;
                    lt = lt->next;
                }
            }
            else{
                if(r == NULL){
                    r = head;
                    r->next = rt;
                } 
                else{
                    rt->next = head;
                    rt  = rt->next;
                }
            }
            head = head->next;
        }
        lt->next = r->next;
        rt->next = NULL;
        return l->next;
    }
};