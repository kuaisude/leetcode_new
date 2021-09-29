/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {
        s=" "+s;//防止该案例：""\n"c*",此操作充满着智慧
        p=" "+p;

        int m = s.size();
        int n = p.size();

        bool dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        for(int i = 1;i<=m;i++)
        {
            for(int j = 1;j<=n;j++){
                if(s[i-1] == p[j-1] || p[j-1] == '.'){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[j-1] == '*'){
                    if(s[i-1]!=p[j-2] && p[j-2]!= '.'){
                        dp[i][j] = dp[i][j-2];
                    }
                    else{
                        dp[i][j] = dp[i][j-1] || dp[i][j-2] || dp[i-1][j];
                    }
                }
            }
        }

        return dp[m][n];

    }
};
// @lc code=end

