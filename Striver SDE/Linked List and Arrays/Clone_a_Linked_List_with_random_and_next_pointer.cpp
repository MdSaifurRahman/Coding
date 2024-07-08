class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr;

        // Step 1: Create new nodes interweaved with original nodes.
        Node* curr = head;
        while (curr) {
            Node* newNode = new Node(curr->val);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next;
        }

        // Step 2: Assign random pointers for the new nodes.
        curr = head;
        while (curr) {
            if (curr->random) {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }

        // Step 3: Separate the new nodes to form the deep copied list.
        curr = head;
        Node* newHead = head->next;
        Node* temp;
        while (curr) {
            temp = curr->next;
            curr->next = temp->next;
            if (temp->next) {
                temp->next = temp->next->next;
            }
            curr = curr->next;
        }

        return newHead;
    }
};
