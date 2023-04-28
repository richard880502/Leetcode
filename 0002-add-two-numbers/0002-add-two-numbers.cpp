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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int b1,b2 = 0;
        ListNode* answer = new ListNode(0);
        ListNode* first = answer;
        while(l1 != nullptr || l2 != nullptr || carry !=0){
            if(l1 != nullptr){
                b1 = l1->val;
                l1 = l1->next;
            }else{
                b1 = 0;
            }
            if(l2 != nullptr){
                b2 = l2->val;
                l2 = l2->next;
            }else{
                b2 = 0;
            }        
            carry += b1 + b2;
            answer->next = new ListNode(carry%10);
            answer = answer->next;
            carry /= 10;                       
        }
        return first->next;
    }
};