/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int> > fourSum(vector<int>& nums, int target) {
        set<vector<int> > m;
        vector< vector<int> > n;
        vector<int> vec;
        int now = 0,p = 0,q = 0;
        sort(nums.begin(),nums.end());
        if (nums.size()<4)
        {
            return n;
        }

        for(int i = 0;i<nums.size()-3;i++){
            for(int j = i+1;j <nums.size() - 2;j++){
                now = nums[i] + nums[j];
                p = j+1;
                q = nums.size() -1;
                while (p < q)
                {
                    if(nums[p] + nums[q] + now == target){
                        vec.push_back(nums[i]);
                        vec.push_back(nums[j]);
                        vec.push_back(nums[p]);
                        vec.push_back(nums[q]);
                        m.insert(vec);
                        vec.clear();
                    }
                    if (nums[p] + nums[q] + now >target)
                    {
                        q-=1;
                    }else
                    {
                        p+=1;
                    }
                    
                }
            }
        }
        n.assign(m.begin(), m.end());
        return n;
    }
};
// @lc code=end

