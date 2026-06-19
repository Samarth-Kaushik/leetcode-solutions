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
    int minVal(TreeNode* root){
        if(root->left == nullptr) return root->val;
        return minVal(root->left);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr) return root;
        if(key == root->val){
            if(root->left == nullptr && root->right == nullptr){
                delete root;
                return nullptr;
            }
            if(root->left == nullptr && root->right != nullptr){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            if(root->left != nullptr && root->right == nullptr){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            if(root->left != nullptr && root->right != nullptr){
                int mini = minVal(root->right);
                root->val = mini;
                root->right = deleteNode(root->right, mini);
                return root;
            }
        }
        if(key > root->val){
            root->right = deleteNode(root->right, key);
        }
        else root->left = deleteNode(root->left, key);
        return root;
    }
};