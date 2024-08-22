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
    void dfs(TreeNode* root, bool is_left, int& ans) {
        if(!root) return;

        if(!root->left && !root->right && is_left) {
            ans += root->val;
        }

        dfs(root->left, true, ans);
        dfs(root->right, false, ans);
    }


public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        dfs(root, false, ans);

        return ans;
    }
};