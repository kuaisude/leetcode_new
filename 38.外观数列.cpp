/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    //runtime超出天际，但是这个是错的
    string countAndSay(int n) {
        if( n == 1){
            return "1";
        }
        else
        {
            string s = countAndSay(n - 1);
            string result = "";
            int start = 0;
            for(int i = 1;i<s.size();i++){
                if(s[i] != s[start]){
                    result += '0'+(i - start);  
                    result += s[start] ;
                    start = i;
                }
            }
            result += '0'+s.length() - start;  
            result += s[start] ;
            return result;
        } 
    }
};
// @lc code=end

