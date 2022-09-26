/*
 * @lc app=leetcode id=235 lang=cpp
 *
 * [235] Lowest Common Ancestor of a Binary Search Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* currentPointer=root;
        while(currentPointer){
            if(p->val < currentPointer->val && q->val < currentPointer->val)
                currentPointer=currentPointer->left;
            else if(p->val > currentPointer->val && q->val > currentPointer->val)
                currentPointer=currentPointer->right;
            else
                return currentPointer;
        }
        return NULL;
    }
};
// @lc code=end

