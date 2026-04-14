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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;
        if (lists.size() == 1) return lists[0];
        vector<ListNode*> newlists;
        for (int i = 0; i < lists.size(); i+=2) {
            if (i == lists.size()-1) newlists.push_back(lists[i]);
            else newlists.push_back(mergeTwo(lists[i], lists[i+1]));
        }
        return mergeKLists(newlists);
    }
    ListNode* mergeTwo(ListNode* a, ListNode* b) {
        if (a == NULL) return b;
        if (b == NULL) return a;
        if (a->val < b->val) {
            a->next = mergeTwo(a->next, b);
            return a;
        }
        b->next = mergeTwo(a, b->next);
        return b;
    }
};