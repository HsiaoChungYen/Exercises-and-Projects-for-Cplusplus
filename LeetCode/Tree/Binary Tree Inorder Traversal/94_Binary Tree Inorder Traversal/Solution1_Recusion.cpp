// Author:ChungYen
// Runing time:4ms
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraversal(root, ans);
        return ans;
    }
    
private:
    void inorderTraversal(TreeNode* root, vector<int>& ans){
        if (root == nullptr) return;
        inorderTraversal(root->left, ans);
        ans.push_back(root->val);
        inorderTraversal(root->right, ans);
    }
    
};
