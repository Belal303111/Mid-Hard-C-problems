/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
public:
void addlast(ListNode* & head,int x)
{
    ListNode*p=new ListNode(x);
        p->val=x;
        p->next=NULL;
    if(head==NULL)
    head=p;
    else{
        ListNode*run=head;
        while(run->next!=NULL)
        run=run->next;
        run->next=p;
    }
}
ListNode* addTwoNumbers(ListNode* l1,ListNode* l2) {
        ListNode * l3= NULL;
    int k=0;
    while(l1!=NULL || l2!=NULL || k>0)
    {
      int val1 = (l1 !=NULL) ? l1->val: 0;
      // val1 =0 if l1=NULL
      int val2 = (l2 !=NULL) ? l2->val: 0;
      // val2 = 0 if l2 = NULL
        int s=val1+val2+k;
        addlast(l3,s%10);
        k=s/10;        
        if(l1!=NULL)
            l1=l1->next;
        if(l2!=NULL)
            l2=l2->next;
    }
    return l3;
}
 };
