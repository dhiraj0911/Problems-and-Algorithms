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
    ListNode* sortList(ListNode* head) {
        if(head == NULL)
            return head;
        // ListNode *temp = head;
        // while(temp != NULL){
        //     ListNode *i = temp->next;
        //     while(i != NULL){
        //         if(temp->val > i->val){
        //             int h = i->val;
        //             i->val = temp->val;
        //             temp->val = h;
        //         }
        //         i = i->next;
        //     }
        //     temp = temp->next;
        // }
        // return head;
        vector<int> v;
        ListNode *temp = head;
        while(temp != NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(), v.end());
        temp = head;
        for(auto x: v){
            temp->val = x;
            temp = temp->next;
        }
        return head;
    }
};