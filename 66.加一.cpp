/*
 * @lc app=leetcode.cn id=66 lang=cpp

 *111/111 cases passed (0 ms)
 *Your runtime beats 100 % of cpp submissions
 *Your memory usage beats 75.86 % of cpp submissions (8.5 MB)

 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans ;
        for(int i = 0;i<digits.size();i++){
            ans.push_back(digits[i]);
        }
        int n = 0;
        int need = 0;
        n = ans.size();
        ans[n-1] ++;

        for(int i = n-1;i>=0;i--){//进位
            if(ans[i] == 10){
                ans[i] = 0;
                if(i != 0 ){
                    ans[i-1]++;
                    
                }
                else
                {
                    need = 1;
                }
            }
        }

        if(need){
            ans.push_back(1);
            for(int i = ans.size()-1;i>0;i--){
                int temp =  ans[i];
                ans[i] = ans[i-1];
                ans[i-1] = temp;
            }
        }
        return ans;

    }
};
// @lc code=end

