/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {

        int ans = 0;
        int last = s.size();
        for(int i = last - 1;i >= 0; i--){
            if(s[i]!=' '){
                last = i+1 ;
                break;
            }
        }

        if(last == 0){
            return 0;
        }

        for(int i = 0;i<last;i++)
        {
            if(s[i]==' '){
                ans = -1;
            }
            ans ++;
        }


        return  ans;
    }
};
// @lc code=end

