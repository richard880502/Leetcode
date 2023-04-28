/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head,*slow;
        ListNode *res = new ListNode(0);
        res->next = head;
        slow = res;
        for(int i  = 0;i < n;i++)
            fast = fast->next;
        
        while(fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        if (slow->next)
            slow->next = slow->next->next;    
        else
            slow->next = NULL;
        return res->next;
    }
};