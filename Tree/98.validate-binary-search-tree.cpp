/*
 * @lc app=leetcode id=98 lang=cpp
 *
 * [98] Validate Binary Search Tree
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
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }

    bool isValid(TreeNode* root, long minValue, long maxValue){
        if(root==NULL)
            return true;
        if(root->val>=maxValue || root->val<=minValue)
            return false;
        bool leftValid=isValid(root->left, minValue, root->val);
        bool rightValid=isValid(root->right, root->val, maxValue);
        return leftValid && rightValid;
    }
};
// @lc code=end

