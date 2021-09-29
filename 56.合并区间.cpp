/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int> > l;
        int ans[10001];
        int m = 0;
        vector<int> vec;
        memset(ans,0,sizeof(ans));
        for(int i = 0;i<intervals.size();i++){
            if(intervals[i][0] == intervals[i][1]){
                ans[  intervals[i][0] ] = 1;
            }

            for(int j = intervals[i][0] ;j <intervals[i][1];j++ )
            {
                ans[j] = 1;
            }
            m = max(m,intervals[i][1]);
        }

        
        int flag = 0;
        for(int i = 0;i <= m;i++)
        {
            if(ans[i] == 1){
                if(flag == 0){
                    vec.push_back(i);
                    flag = 1;
                }
            }else{
                if(flag == 1){
                    vec.push_back(i);
                    l.push_back(vec);
                    vec.clear();
                    flag = 0;
                }
            }

        }
        return l;
    }
};
// @lc code=end

