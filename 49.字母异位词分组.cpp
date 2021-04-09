/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map< string ,vector<string> > mp;

        vector< vector<string> > ans;

        for(string str : strs){
            string key = str;
            sort(key.begin(),key.end());
            mp[key].push_back(str);
        }

        for(auto it = mp.begin();it != mp.end();++it){
            ans.push_back(it->second);
        }

        return ans;
    }
};
// @lc code=end

