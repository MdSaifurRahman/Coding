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
        if(head == NULL||head->next == NULL||k == 0) return head;
        ListNode *temp = head;
        int l = 1;
    while(temp->next != NULL) {
        ++l;
        temp = temp->next;
    }
        temp->next = head;
        k = k%l; //when k is more than length of list
        int end = l-k; //to get end of the list
        while(end--) temp = temp->next;
        //breaking last node link and pointing to NULL
        head = temp->next;
        temp->next = NULL;
            
        return head;
    }
};