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
class BSTIterator {
private:
    void build(TreeNode* root, vector<int>& inorder){
        if(root == nullptr) return ;
        build(root->left, inorder);
        inorder.push_back(root->val);
        build(root->right, inorder);
        return;
    }
public:
    int i = 0;
    vector<int> inorder;
    BSTIterator(TreeNode* root) {
        // vector<int> inorder;
        build(root, inorder);
    }
    
    int next() {
        if(!inorder.empty()){
            return inorder[i++];
        }
        return -1;
    }
    
    bool hasNext() {
        if(inorder.empty() || i >= inorder.size()) return false;
        else return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */