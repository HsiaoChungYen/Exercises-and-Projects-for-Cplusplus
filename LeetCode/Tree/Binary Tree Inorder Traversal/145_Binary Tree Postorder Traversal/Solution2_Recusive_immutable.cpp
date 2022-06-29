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
    // Solution 2: Recusive (immutable)
    vector<int> postorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> ans;
        //ans = [postorderTraversal(root->left),
        //       postorderTraversal(root->right),
        //       root->val]
        const vector<int> l = postorderTraversal(root->left);
        const vector<int> r = postorderTraversal(root->right);
        ans.insert(ans.end(), l.begin(), l.end());
        ans.insert(ans.end(), r.begin(), r.end());
        ans.push_back(root->val);
        return ans;
    }   
};
