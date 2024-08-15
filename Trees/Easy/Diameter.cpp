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



// Need to optimise the solution




class Solution {
    int ht(TreeNode* Node){
        if(Node == nullptr){
            return 0;
        }
        return 1+max(ht(Node->left),ht(Node->right));
        
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        // so the idea would be to start from the bottom right?
        if(root == nullptr){
            return 0;
        }

        int leftsubtree_ht = ht(root->left);
        int rightsubtree_ht = ht(root->right);

        int lefttree = diameterOfBinaryTree(root->left); // max ht within sub tree
        int righttree = diameterOfBinaryTree(root->right); 

        return max({leftsubtree_ht+rightsubtree_ht,lefttree,righttree});
        //  return max({leftsubtree_ht+rightsubtree_ht+1,lefttree,righttree});
    }
};