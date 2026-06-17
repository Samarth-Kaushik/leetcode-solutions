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
private:
    TreeNode* solve(vector<int>& inorder, vector<int>& postorder, int& postInd, int inSt, int inEnd, int size, unordered_map<int, int>& mpp){
        if(postInd < 0 || inSt > inEnd) return NULL;
        int element = postorder[postInd--];
        TreeNode* root = new TreeNode(element);
        int pos = mpp[element];
        root->right = solve(inorder, postorder, postInd, pos+1, inEnd, size, mpp);
        root->left = solve(inorder, postorder, postInd, inSt, pos-1, size, mpp);

        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> mpp;
        int n = inorder.size();
        for(int i = 0; i < n; i++){
            mpp[inorder[i]] = i;
        }
        int postInd = n-1;
        return solve(inorder, postorder, postInd, 0, n-1, n, mpp);
    }
};