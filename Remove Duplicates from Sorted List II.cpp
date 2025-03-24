class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return head;

        ListNode* d = new ListNode(0,head);
        ListNode* curr = head;
        ListNode* prev = d;

        while(curr){
            bool isDuplicate = false;
            while(curr->next && curr->val == curr->next->val)       
            {           
                isDuplicate=true;
                ListNode* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
        if(isDuplicate){
            prev->next=curr->next;
            delete curr;
        }else{
            prev=curr;
        }
    curr=prev->next;
    }
    ListNode* newHead = d->next;
    delete d;
    return newHead;
    }
};
