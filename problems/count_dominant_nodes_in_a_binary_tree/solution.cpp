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
    int count = 0;
    int solve(TreeNode* root){
        if(!root) return INT_MIN;
        int leftMax = solve(root->left);
        int rightMax = solve(root->right);
        int treeMax = max({root->val,leftMax, rightMax});
        if(treeMax == root->val) count ++;
        return treeMax;
    }
    int countDominantNodes(TreeNode* root) {
        count = 0;
        solve(root);
        return count;
    }
    
};