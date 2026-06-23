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
        if(lists.empty()) return nullptr;
        vector<int> v;
        for(int i = 0; i < lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp != nullptr){
                v.push_back(temp->val);
                temp = temp->next;
            }
        }
        if(v.empty()) return nullptr;
        sort(v.begin(), v.end());
        int n = v.size();
        ListNode* head = new ListNode(v[0]);
        ListNode* curr = head;
        ListNode* prev = nullptr;
        for(int i = 1; i < n; i++){
            prev = curr;
            curr->next = new ListNode(v[i]);
            curr = curr->next;
        }
        return head;
    }
};