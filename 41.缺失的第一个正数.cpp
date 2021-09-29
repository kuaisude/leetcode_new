/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int ans[n+1];
        memset(ans,0,sizeof(ans));
        for(int i = 0;i < n;i++){
            if(nums[i] <= n && nums[i] > 0){
                ans[nums[i] - 1] = 1;
            }
        }

        for(int i = 0;i <= n;i++){
            if(ans[i] == 0){
                return i + 1;
            }
        }

        if(nums[0] == 1){ // 莫名的空间利用率提高了？？？
            return 2;
        }else{
            return 1;
        }
    }
};
// @lc code=end

