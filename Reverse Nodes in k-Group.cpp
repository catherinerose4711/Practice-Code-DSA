class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)return head;

        ListNode* curr = head;
        int count = 0;

        while(curr && count < k){
            curr = curr->next;
            count++;
            
        }
        if(count==k){
            ListNode* prev = reverseKGroup(curr,k);
            while(count--){
                ListNode* temp = head->next;
                head->next=prev;
                prev=head;
                head=temp;
            }
        head=prev;
        }
        return head;
    }
};
