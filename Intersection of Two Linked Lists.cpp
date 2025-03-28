class Solution {
public:
    int getLen(ListNode* head){
        int length = 0;
        while(head){
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     if(!headA || !headB) return NULL;
        int LenA = getLen(headA);
        int LenB = getLen(headB);
        
        int diff = abs(LenA - LenB);
    
    if(LenA > LenB){
        while(diff--) headA = headA->next;
    }else{
        while(diff--) headB = headB->next;
    }
    
    while(headA && headB){
         if(headA==headB) return headA;
         headA = headA->next;
         headB = headB->next;
    }
return NULL;
    }
};
