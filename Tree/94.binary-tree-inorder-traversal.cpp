/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int> result;
    //     if(root==NULL)
    //         return result;
    //     stack<TreeNode*> s;
    //     TreeNode* node = root;
    
    //     while(1){
    //         if(node){
    //             s.push(node);
    //             node = node->left;
    //         }
    //         else{
    //             if(s.empty())
    //                 break;
    //             node = s.top();
    //             s.pop();
    //             result.push_back(node->val);
    //             node = node->right;
    //         }
    //     }
    //     return result;
    // }

    void inorder(TreeNode* root, vector<int>& a){
        if(root==NULL)
            return;
        
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }
};
// @lc code=end

