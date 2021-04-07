/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";
        }
        int index = 0;
        for(int i = 0;i<strs[0].size();i++)
        {
            char cur = strs[0][index];
            for(string str:strs)
            {
                if(str.length() == i || cur != str[i])
                {
                    return str.substr(0,index);
                }
            }
            index++ ;
        }
        return strs[0].substr(0,index);
    }
};
// @lc code=end

