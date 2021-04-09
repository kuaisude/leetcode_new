/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == needle){
            return 0;
        }
        if(needle == ""){
            return 0;
        }
        if(needle.size() > haystack.size()){
            return -1;
        }
        string str;
        for(int i = 0;i<haystack.size();i++){
            str = haystack.substr(i,needle.size());//偏移量
            if(str == needle){
                return i;
            }   
        }
        return -1;
    }
};
// @lc code=end

