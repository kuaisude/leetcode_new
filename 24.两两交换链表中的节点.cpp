/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    pair<ListNode* ,ListNode*> myReverse(ListNode* head,ListNode* tail)
    {
        ListNode* prev = tail ->next;
        ListNode* p = head;
        while(prev!=tail){
            ListNode* nex = p->next;
            p->next = prev;
            prev = p;
            p = nex;
        }
        return {tail,head};
    }

    ListNode* swapPairs(ListNode* head) {
        ListNode* hair = new ListNode(0);
        hair->next = head;
        ListNode* pre = hair;

        while(head){
            ListNode* tail = pre;
            for(int i = 0;i<2;++i)
            {
                tail = tail->next;
                if(!tail){
                    return hair->next;
                }
            }
            ListNode* nex = tail->next;
            pair<ListNode*,ListNode*> result = myReverse(head,tail);
            head = result.first;
            tail = result.second;
            pre->next = head;
            tail -> next =nex;
            pre = tail;
            head = tail->next;
        }
        return hair->next;
    }
};
// @lc code=end

