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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return NULL;
        
        int length = 1;
        ListNode* current = head;
        while(current->next)
        {
            current = current->next;
            length++;
        }
        
        int rotateTimes = k % length;
        if (rotateTimes == 0) return head;
        current->next = head;

        for (int i = 0;i < length-rotateTimes ;i++)
            current = current->next;
        
        ListNode *newList = current->next;
        current->next = NULL;

        return newList;
    }
};