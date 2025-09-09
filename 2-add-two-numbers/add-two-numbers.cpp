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
        ListNode* temp = new ListNode();
        ListNode* ret = temp;
        int carry = 0, s = 0;
        while (l1 || l2 || carry) {
            s = carry;
            if (l1) {
                s += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                s += l2->val;
                l2 = l2->next;
            }
            if (s > 9) {
                carry = 1;
                s %= 10;
            }
            else carry = 0;
            temp->next = new ListNode(s);
            temp = temp->next;
        }
        ListNode* result = ret->next;
        delete ret;
        return result;
    }
};