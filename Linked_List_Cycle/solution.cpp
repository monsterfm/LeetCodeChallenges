/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        
        ListNode* copy1 = head;
        ListNode* copy2 = head;
        while(copy1 && copy2)
        {
            if(!copy1->next)
                return false;
            if(!copy2->next || !copy2->next->next)
                return false;
            
            copy1=copy1->next;
            copy2=copy2->next->next;
            
            if(copy1==copy2)
                return true;
        }
        return false;
        
    }
};