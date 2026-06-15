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
private:
    pair<ListNode*, ListNode*> middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next;
            if(fast) fast = fast->next;
        }
        return {slow, prev};
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        pair<ListNode*, ListNode*> ans = middle(head);
        ListNode* middleN = ans.first;
        ListNode* prev = ans.second;
        prev->next = middleN->next;
        middleN->next = NULL;
        delete(middleN);
        return head;
    }
};