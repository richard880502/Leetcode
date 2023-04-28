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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return head;
        
        ListNode *result = new ListNode();
        ListNode *previous = result,*current = previous->next;
        result->next = head;
        
        while(previous->next)
        {
            current  = previous->next;
            while(current->next && current->val == current->next->val)
                current=current->next;
            current != previous->next ? previous->next = current->next : previous = previous->next;
        }
        return result->next;
    }
};