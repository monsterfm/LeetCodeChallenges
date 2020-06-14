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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         
        if(head->next==nullptr)  
            return nullptr;
        
        ListNode *nth = head;
        ListNode *last = head;
        int dist = 0;
        while (dist != n-1)
        {
            last = last->next;
            dist++;
        }
        ListNode *pre=head;
        while (last->next != nullptr)
        {
            pre=nth;
            last = last->next;
            nth = nth->next;
        }
        if(n==1)
        {
            pre->next=nullptr;
            return head;
        }
        while(nth->next!=last)
        {
            nth->val=nth->next->val;
            nth=nth->next;
        }
        nth->val=nth->next->val;
        nth->next=nullptr;
        return head;
    }
};