/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int maxPos = 0,n = nums.size(),end = 0,step = 0;
        for(int i = 0 ; i< n-1; i++)
        {
            if(maxPos >= i){
                maxPos = max(maxPos,i+nums[i]);
                if(i == end)
                {
                    end = maxPos;
                    step ++;
                }
            }
        }
        return step;
    }
};
// @lc code=end

