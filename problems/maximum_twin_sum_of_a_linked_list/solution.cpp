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
    int pairSum(ListNode* head) {
        if(head == NULL || head->next == NULL) return 0;
        ListNode* temp = head;
        vector<int> val;
        while(temp != NULL){
            val.push_back(temp->val);
            temp = temp->next;
        }
        int maxi = INT_MIN;
        int n = val.size();
        for(int i = 0; i < n/2; i++){
            int temp = val[i] + val[n-1-i];
            maxi = max(temp, maxi);
        }
        return maxi;

    }
};