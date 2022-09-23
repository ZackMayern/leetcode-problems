/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1)
            return head;

        ListNode* dummyNode=new ListNode(0, head);

        ListNode* previousNode=dummyNode;
        ListNode* currentNode=dummyNode; 
        ListNode* nextNode=dummyNode;

        int count=0;

        while(currentNode->next!=NULL){
            currentNode=currentNode->next;
            count++;
        }

        while(count>=k){
            currentNode=previousNode->next;
            nextNode=currentNode->next;
            for(int i=1; i<k; i++){
                currentNode->next=nextNode->next;
                nextNode->next=previousNode->next;
                previousNode->next=nextNode;
                nextNode=currentNode->next;
            }
            previousNode=currentNode;
            count-=k;
        }
        return dummyNode->next;
    }
};
// @lc code=end

