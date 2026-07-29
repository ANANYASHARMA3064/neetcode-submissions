class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr)
            return nullptr;

        int len = 0;
        ListNode* curr = head;

        while (curr != nullptr) {
            len++;
            curr = curr->next;
        }

        if (n == len)
            return head->next;

        curr = head;

        for (int i = 1; i < len - n; i++) {
            curr = curr->next;
        }

        curr->next = curr->next->next;

        return head;
    }
};