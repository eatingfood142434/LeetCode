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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* ret = head;
        ListNode* h = head;
        ListNode* t = head;
        int len = 1;
        while (t->next != nullptr) {
            t = t->next;
            len++;
        }
        for (int i = 0; i < len-n-1; i++) h = h->next;
        if (len == n) return ret->next;
        if (h->next == nullptr) return nullptr;
        h->next = (h->next)->next;
        return ret;
    }
};