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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *curr = head;
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return head;
        map<int, int> m;
        while(curr != NULL){
            m[curr->val]++;
            curr = curr->next;
        }
        int ok = m.size(), count = 0;
        for(auto x: m){
            if(x.second > 1)
                count++;
        }
        if(ok == count)
            return NULL;
        ListNode * dummy = head;
        ListNode *temp = new ListNode(NULL);
        temp->next = dummy;
        for(auto x: m){
            if(x.second == 1){
                dummy->val = x.first;
                dummy = dummy->next;
                temp = temp->next;
            }
        }
        
        temp->next = NULL;
        return head;
    }
};