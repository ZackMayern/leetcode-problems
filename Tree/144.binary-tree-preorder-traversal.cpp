/*
 * @lc app=leetcode id=144 lang=cpp
 *
 * [144] Binary Tree Preorder Traversal
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
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> result;
    //     if(root==NULL)
    //         return result;
    //     stack<TreeNode*> s;
    //     s.push(root);
    //     while(!s.empty()){
    //         TreeNode* node = s.top();
    //         s.pop();
    //         result.push_back(node->val);
    //         if(node->right)
    //             s.push(node->right);
    //         if(node->left)
    //             s.push(node->left);
    //     }
    //     return result;
    // }
    void preOrder(TreeNode* root, vector<int>& a){
        if(root==NULL)
            return;
        
        a.push_back(root->val);
        preOrder(root->left, a);
        preOrder(root->right, a);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preOrder(root, result);
        return result;
    }
};
// @lc code=end

