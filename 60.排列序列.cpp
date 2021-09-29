/*
 * @lc app=leetcode.cn id=60 lang=cpp
 *
 * [60] 排列序列
 */

// @lc code=start
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> vec;
        vector<string> str_vec;
        string str;
        vec.clear();
        for(int i = 1;i<=n;i++){
            vec.push_back(i);
        }
        vector<int>::iterator it = vec.begin();
        do{
            for(int i = 0;i<n;i++)
            {
                str.push_back('0' + *(it + i)); 
            }
            str_vec.push_back(str);
            str.clear();
        }while(next_permutation(it,it + n));

        return str_vec[k-1];
    }
};
// @lc code=end

