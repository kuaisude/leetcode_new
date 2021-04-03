/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
class Solution {
public:
   string convert(string s, int r) {
        if (r <= 0) return "";
        if (r == 1) return s;
        string res;
        for (int i = 0; i < r; ++i){
            for (int j = i; j < s.size(); j += 2 * r - 2){
                if (i == 0 || i == r - 1) res += s[j];
                else {
                    res += s[j];
                    if (j + 2 * (r - i - 1) < s.size())
                        res += s[j + 2 * (r - i - 1)];
                }
            }
        }
        return res;
    }
};
// @lc code=end

