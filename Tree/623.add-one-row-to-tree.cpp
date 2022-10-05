/*
 * @lc app=leetcode id=623 lang=cpp
 *
 * [623] Add One Row to Tree
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
    void addRow(TreeNode* root, int val, int currDepth, int insertDepth){
        if(root==NULL)
            return;
        if(currDepth==insertDepth-1){
            TreeNode* node=root->left;
            root->left=new TreeNode(val);
            root->left->left=node;
            node=root->right;
            root->right=new TreeNode(val);
            root->right->right=node;
        }
        else{
            addRow(root->left, val, currDepth+1, insertDepth);
            addRow(root->right, val, currDepth+1, insertDepth);
        }
    }

    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* node=new TreeNode(val);
            node->left=root;
            return node;
        }
        addRow(root, val, 1, depth);
        return root;
    }
};
// @lc code=end

