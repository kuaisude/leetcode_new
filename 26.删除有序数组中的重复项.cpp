/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;

        int left=0;
        for(int right=1;right<nums.size();right++){
            if(nums[left]!=nums[right]){
                left++;
                nums[left] = nums[right];
            }
        }

        return ++left;
    }
};
// @lc code=end

