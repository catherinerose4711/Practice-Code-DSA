class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p= NULL;
        ListNode* c= head;
        ListNode*n = c;
        
        while(n){
            n= n->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
      }
};
