/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string> > ans(n+1);//动态规划
        if(n == 0){
            return {};
        }
        if(n == 1){
            return  {"()"};
        }

        ans[0] = {""};
        ans[1] = {"()"};

        for(int i = 2;i <= n;i++){
            for(int j = 0;j<i;j++){
                for(string p : ans[j])
                    for(string q:ans[i-j-1]){
                        string str = "(" + p + ")" + q;
                        ans[i].push_back(str);
                    }
            }
        }

        return ans[n];
    }
};
// @lc code=end

