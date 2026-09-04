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
        vector<int> ans;
        ListNode* head = NULL;
        ListNode* tail = NULL;

        for (int i = 0; i < lists.size(); i++) {
            ListNode* curr = lists[i];

            while (curr != NULL) {
                ans.push_back(curr->val);
                curr = curr->next;
            }
        }

        sort(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); i++) {
            ListNode* temp = new ListNode(ans[i]);
            if (head == NULL) {
                head = tail = temp;
            } else {
                tail->next = temp;
                tail = tail->next;
            }
        }
        return head;
    }
};