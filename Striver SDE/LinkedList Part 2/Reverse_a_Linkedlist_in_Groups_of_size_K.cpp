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
    ListNode* getkth(ListNode* curr,int k){
            while(curr!=nullptr && k>0){
                curr = curr->next;
                k-=1;
            }
            return curr;
        }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode *groupPrev = dummy;

        while(true){
            ListNode *kth = getkth(groupPrev,k);
            if(kth==nullptr){
                break;
            }
            ListNode *groupNext = kth->next;
            ListNode *prev = kth->next;
            ListNode *curr = groupPrev->next;
            ListNode *tmp ;

            while(curr!=groupNext){
                tmp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = tmp;
            }
            tmp = groupPrev->next;
            groupPrev->next = kth;
            groupPrev = tmp;

        }
        return dummy->next;
    }
};