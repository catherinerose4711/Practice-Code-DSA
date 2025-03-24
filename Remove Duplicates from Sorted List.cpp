class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head)return head;
        ListNode* curr = head;

        while(curr!=NULL && curr->next!=NULL){
            
        if(curr->val==curr->next->val){
            ListNode* nextNode= curr->next->next;
            delete curr->next;
            curr->next = nextNode;
        }
        else{
            curr=curr->next;
        }
        }
        return head;
    }
};
