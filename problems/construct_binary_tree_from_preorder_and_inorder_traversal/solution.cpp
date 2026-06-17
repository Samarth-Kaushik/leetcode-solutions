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
//     int findPosition(vector<int>& inorder, int element){
//         int n = inorder.size();
//         for(int i = 0; i < n; i++){
//             if(inorder[i] == element) return i;
//         }
//         return -1;
    // }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int& prInd, int inSt, int inEnd, int n, unordered_map<int,int>& mpp){
        if(prInd > n || inSt > inEnd) return NULL;
        int element = preorder[prInd++];
        TreeNode* root = new TreeNode(element);
        int pos = mpp[element];

        root->left = solve(preorder, inorder, prInd, inSt, pos-1, n, mpp);
        root->right = solve(preorder, inorder, prInd, pos+1, inEnd, n, mpp);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prInd = 0;
        int n = preorder.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++){
            mpp[inorder[i]] = i;
        }
        TreeNode* ans = solve(preorder, inorder, prInd, 0, n-1, n, mpp);
        return ans;
    }
};