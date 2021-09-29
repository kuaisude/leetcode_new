/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个升序链表
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
    static bool cmp(ListNode* l1,ListNode* l2){
        return l1->val >= l2->val;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>,function<bool(ListNode*,ListNode*)> > p_que(cmp);
        for(size_t i = 0;i < lists.size();i++){
            if(lists[i]){
                p_que.push(lists[i]);
            }
        }

        ListNode myhead(-1,nullptr);
        ListNode* pre = &myhead;

        while (!p_que.empty())
        {
            ListNode* topNode = p_que.top();
            p_que.pop();
            pre->next = topNode;
            pre = pre->next;
            if(topNode->next){
                p_que.push(topNode->next);
            }
        }
        
        return myhead.next;//注意用点，这里返回的是个指针

    }
};
// @lc code=end

