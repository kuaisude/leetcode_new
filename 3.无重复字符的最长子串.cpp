/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 * 
 *  这道题主要用到思路是：滑动窗口

    什么是滑动窗口？

    其实就是一个队列,比如例题中的 abcabcbb，进入这个队列（窗口）为
    abc 满足题目要求，当再进入 a，队列变成了 abca，这时候不满足要求。
    所以，我们要移动这个队列！

    如何移动？

    我们只要把队列的左边的元素移出就行了，直到满足题目要求！

    一直维持这样的队列，找出队列出现最长的长度时候，求出解！

 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        unordered_set<char> lookup;
        int maxStr = 0;
        int left = 0;//左指针
        for(int i = 0; i < s.size(); i++){
            while (lookup.find(s[i]) != lookup.end()){
                lookup.erase(s[left]);
                left ++;
            }
            maxStr = max(maxStr,i-left+1);
            lookup.insert(s[i]);
        }
        return maxStr;
    }
};
// @lc code=end

