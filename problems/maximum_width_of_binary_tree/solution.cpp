/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        long long maxWidth = 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        while(!q.empty()){
            int n = q.size();
            long long mmin = q.front().second;
            long long first, last;
            for(int i = 0; i < n; i++){
                long long currId = q.front().second - mmin;
                TreeNode* temp = q.front().first;
                q.pop();
                if(i == 0) first = currId;
                if(i == n-1) last = currId;
                if(temp->left) q.push({temp->left, currId * 2 + 1});
                if(temp->right) q.push({temp->right, currId * 2 + 2});

                maxWidth = max(maxWidth, last - first + 1);
            }
        }
        return maxWidth;
    }
};