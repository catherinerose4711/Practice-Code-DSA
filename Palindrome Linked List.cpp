class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>palindrome;
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next){
            palindrome.push_back(slow->val);
            slow = slow->next;
            fast = fast->next->next; 
        }
     if(fast != NULL){
        slow = slow->next;
     }
     int index = palindrome.size() -1;
     while(slow){
        if(slow->val != palindrome[index--])return false;
        slow = slow->next;
     }
     return true;
    }
};
