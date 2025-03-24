class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head)return head;
        ListNode* curr = head;

        while(curr!=NULL && curr->next!=NULL){
            
        if(curr->val==curr->next->val){
            ListNode* temp= curr->next;
            curr->next=cur->next->next;
            delete temp; 
        }
        else{
            curr=curr->next;
        }
        }
        return head;
    }
};
