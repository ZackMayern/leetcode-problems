/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
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
    bool findTarget(TreeNode* root, int k) {
        vector<int> sortedArr;
        inOrderTraversal(root, sortedArr);
        int i=0, j=sortedArr.size()-1;
        while(i<j){
            int sum=sortedArr[i]+sortedArr[j];
            if(sum==k)
                return true;
            else if(sum>k)
                j--;
            else
                i++;
        }
        return false;
    }

    void inOrderTraversal(TreeNode* root, vector<int>& arr){
        if(root==NULL)
            return;
        
        inOrderTraversal(root->left, arr);
        arr.push_back(root->val);
        inOrderTraversal(root->right, arr);
    }
};
// @lc code=end

