/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    // Iterative Approach
    // ListNode* reverseList(ListNode* head) {
    //     ListNode* previous = NULL;
    //     ListNode* current = head;

    //     while(current){
    //         ListNode* temp;
    //         temp = current->next;
    //         current->next=previous;
    //         previous = current;
    //         current = temp;
    //     }
    //     return previous;
    // }

    // Recursive Approach
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return NULL;

        ListNode* newHead = head;
        if(head->next){
            newHead = reverseList(head->next);
            head->next->next = head;
        }
        head->next = NULL;
        return newHead;
    }
};
// @lc code=end

