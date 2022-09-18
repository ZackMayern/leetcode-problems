/*
 * @lc app=leetcode id=145 lang=cpp
 *
 * [145] Binary Tree Postorder Traversal
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
    // vector<int> postorderTraversal(TreeNode* root) {
    //     vector<int> result;
    //     if(root==NULL)
    //         return result;
    //     stack<TreeNode*> s;
    //     TreeNode* node = root;
    //     TreeNode* temp;

    //     while(node!=NULL || !s.empty()){
    //         if(node){
    //             s.push(node);
    //             node = node->left;
    //         }
    //         else{
    //             temp = s.top()->right;
    //             if(temp==NULL){
    //                 temp = s.top();
    //                 s.pop();
    //                 result.push_back(temp->val);
    //                 while(!s.empty() && temp == s.top()->right){
    //                     temp = s.top();
    //                     s.pop();
    //                     result.push_back(temp->val);
    //                 }
    //             }
    //             else
    //                 node = temp;
    //         }
    //     }
    //     return result;
    // }

    void postOrder(TreeNode* root, vector<int>& a){
        if(root==NULL)
            return;
        
        postOrder(root->left, a);
        postOrder(root->right, a);
        a.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
       vector<int> result;
       postOrder(root, result);
       return result;
    }
};
// @lc code=end

