/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int had = 0;
        for(int i = 0;i<nums.size();i++){
            if(target == nums[i]){
                had = 1;
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

