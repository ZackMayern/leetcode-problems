/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
 */

// @lc code=start
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
    bool checkSymetric(TreeNode* left, TreeNode* right){
        // if(!left && !right)
        //     return true;
        
        // if(!left || !right)
        //     return false;
        
        // if(left->val!=right->val)
        //     return false;

        // return checkSymetric(left->left, right->right) && checkSymetric(left->right, right->left);

        if(left==NULL || right==NULL)
            return left==right;
        
        if(left->val!=right->val)
            return false;
        
        return checkSymetric(left->left, right->right) && checkSymetric(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return checkSymetric(root->left, root->right);
    }
};
// @lc code=end

