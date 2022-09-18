/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        struct ListNode* resultList = new ListNode(0, head);
        ListNode* previous = resultList;
        ListNode* current = head;
        while(current){
            if(current->val == val)
                previous->next = current->next;
            else
                previous = current;
            current = current->next;
        }
        return resultList->next;
    }
};
// @lc code=end

