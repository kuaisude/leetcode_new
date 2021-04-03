/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string str = to_string(x);
        string s = str;
        reverse(str.begin(),str.end());
        return str==s;
    }
};
// @lc code=end

