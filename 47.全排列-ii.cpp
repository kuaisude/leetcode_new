/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> > ans;
        vector<int> vec;
        int n = nums.size();
        vector<int>::iterator it = nums.begin();
        do{
            for(int i=0;i<n;i++)
                vec.push_back(nums[i]);
            ans.push_back(vec);
            vec.clear();
	    }while(next_permutation(it,it+n));

        return ans;
    }
};
// @lc code=end

