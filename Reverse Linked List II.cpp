class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left==right)return head;

        ListNode* d = new ListNode(0);
        d->next=head;
        ListNode* prev = d;

        for(int i=1;i<left;i++){
            prev=prev->next;
        }
        ListNode* s = prev->next;
        ListNode* e = s->next;

        for(int i=0; i<right-left; i++){
           s->next=e->next;
           e->next=prev->next;
           prev->next=e;
           e=s->next;
        }
        return d->next;
    }

};
