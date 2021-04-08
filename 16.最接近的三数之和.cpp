/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int e = pow(10,7),index = 0;
        int ind[3] = {0};
        for(int i = 0;i<nums.size()-2;i++)
        {
            for(int j = i+1;j<nums.size()-1;j++)
            {
                for(int index = j+1; index <nums.size();index++){
                    int temp = abs( nums[i] + nums[j] + nums[index]  - target);
                    if(temp < 0) temp *=(-1);
                    if(temp < e)
                    {
                        e = temp;
                        ind[0] = i;
                        ind[1] = j;
                        ind[2] = index;
                    }
                }
            }
        }

    return nums[ind[0]] + nums[ind[1]] + nums[ind[2]] ;


    }
};
// @lc code=end

