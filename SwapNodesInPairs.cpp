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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return head;
        if(head->next==NULL) return head;
        ListNode* run=head;
        while(run!=NULL && run->next!=NULL)
        {
            swap(run->val,run->next->val);
            run=run->next->next;
        }
        return head;

    }
};