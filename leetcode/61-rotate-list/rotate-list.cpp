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
    int getSize(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int kk = getSize(head);
        if (k == 0 || kk == 0)
            return head;
        k %= kk;
        while (k--) {
            ListNode* temp = head;
            ListNode* prev = NULL;
            while (temp->next != NULL) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            temp->next = head;
            head = temp;
        }
        return head;
    }
};