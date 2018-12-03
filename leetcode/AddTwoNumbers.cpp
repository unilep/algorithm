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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = new ListNode(0);
        ListNode* head = node;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr) {
            int x = l1 == nullptr ? 0 : l1->val;
            int y = l2 == nullptr ? 0 : l2->val;
            int sum = x + y + carry;
            carry = sum / 10;
            node->next = new ListNode(sum % 10);
            node = node->next;
            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
        }
        if(carry) {
            node->next = new ListNode(1);
        }
        return head->next;
    }
};
