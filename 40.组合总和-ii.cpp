/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
private:
    vector<vector<int> > ans;
    vector<int> vec;
    vector<int> path;

public:
    void DFS(int start,int target)
    {
        if(target == 0){
            ans.push_back(path);
            return;
        }
        for(int i = start;i<vec.size()&&target - vec[i] >= 0;i++){
            if(i > start && vec[i] == vec[i - 1])
                continue;
            path.push_back(vec[i]);
            DFS(i+1,target- vec[i]);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        this->vec = candidates;
        DFS(0,target);
        return ans;

    }
};
// @lc code=end

