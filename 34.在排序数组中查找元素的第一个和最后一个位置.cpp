/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == target){
                ans[0] = i;
                int j = i;
                while (target == nums[j])
                {
                   j++;
                   if(j >= nums.size()){
                       break;
                   }
                }
                ans[1] = j-1;
                break;
            }
        }
        return ans;

    }
};
// @lc code=end

