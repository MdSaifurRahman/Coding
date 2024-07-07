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
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) return nullptr;
        ListNode *slow = head;  
        ListNode *fast = head;
        while(fast!=nullptr && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){
                break;                
            }
        }
        if (!fast || !fast->next) {
            return nullptr;
        } 
        slow = head;
        while(slow!=fast){
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};