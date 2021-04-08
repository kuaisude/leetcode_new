/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;

        ListNode* p = dummyHead;
        ListNode* q = dummyHead;
        for( int i = 0 ; i < n + 1 ; i ++ ){//p与q相差n
            q = q->next;
        }

        while(q){//当q为null应该删除p->next;
            p = p->next;
            q = q->next;
        }
        
        //删除p->next;
        ListNode* delNode = p->next;
        p->next = delNode->next;
        delete delNode;

        
        ListNode* retNode = dummyHead->next;
        delete dummyHead;

        return retNode;

    }
};
// @lc code=end

