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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
        
        ListNode* current = head;
        
        ListNode* copy=new ListNode(current->val);
        
        ListNode* reversed = copy;
        
        current=current->next;
        
        while(current)
        {
            copy = copy->next = new ListNode(current->val);
            current=current->next;
        }
        
        reversed = reverseList(reversed);
        while(reversed && head)
        {
            if(reversed->val!=head->val)
                return false;
            else
            {
                head=head->next;
                reversed=reversed->next;
            }
        }
        return true;
    }
    
    ListNode* reverseList(ListNode* head) {
        
        if(!head)return NULL;
        
        ListNode* next;
        ListNode* actual = head;
        ListNode* previous=NULL;
        
        while(actual)
        {
            next = actual->next;
            
            actual->next=previous;
            
            previous=actual;
            
            actual = next;
        }
        return previous;
    }
};