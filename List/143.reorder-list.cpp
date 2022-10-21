/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if ((!head) || (!head->next) || (!head->next->next)) 
            return;
        
        stack<ListNode*> st;
        ListNode* cur = head;
        int size = 0;
        while (cur != NULL) // Put all nodes in stack
        {
            st.push(cur);
            size++;
            cur = cur->next;
        }
        
        ListNode* node = head;
        for (int j=0; j<size/2; j++) // Between every two nodes insert the one in the top of the stack
        {
            ListNode *ele = st.top();
            st.pop();
            ele->next = node->next;
            node->next = ele;
            node = node->next->next;
        }
        node->next = NULL;
    }
};
// @lc code=end

