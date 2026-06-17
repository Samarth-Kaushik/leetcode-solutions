/**
 * Definition for a binary tree front.
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
    TreeNode* createParentMapping(TreeNode* root, int target, map<TreeNode*, TreeNode*>& nodeToParent){
        TreeNode* res = NULL;
        if(root == NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front->val == target){
                res = front;
            }
            if(front->left){
                nodeToParent[front->left] = front;
                q.push(front->left);
            }
            if(front->right){
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        return res;
    }

    int infectTree(TreeNode* root, map<TreeNode*, TreeNode*>& nodeToParent){
        int ans = 0;
        if(root == NULL) return ans;
        map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        q.push(root);
        visited[root] = true;
        while(!q.empty()){
            bool flag = 0;
            int n = q.size();
            for(int i = 0; i < n; i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left && !visited[front->left]){
                    flag = 1;
                    visited[front->left] = true;
                    q.push(front->left);
                }
                if(front->right && !visited[front->right]){
                    flag = 1;
                    visited[front->right] = true;
                    q.push(front->right);
                }
                if(nodeToParent[front] && !visited[nodeToParent[front]]){
                    flag = 1;
                    q.push(nodeToParent[front]);
                    visited[nodeToParent[front]] = true;
                }
            }
            if(flag == 1) ans++;
        }
        return ans;
    }
    int amountOfTime(TreeNode* root, int start) {
        // int ans = 0;
        if(root == NULL) return 0;
        map<TreeNode*, TreeNode*> nodeToParent;
        TreeNode* targetNode = createParentMapping(root, start, nodeToParent);
        int ans = 0;
        ans = infectTree(targetNode, nodeToParent);
        return ans;
    }
};