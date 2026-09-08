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
    ListNode* middleNode(ListNode* head) {

        if (head == NULL) {
            return head;
        }
        int count = 1;

        ListNode* temp = head;
        while (temp->next != NULL) {
            count++;
            temp = temp->next;
        }

        int mid = count / 2;

        ListNode* newhead = head;

        while (mid != 0) {
            newhead = newhead->next;
            mid--;
        }

        return newhead;
    }
};