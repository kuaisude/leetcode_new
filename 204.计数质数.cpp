/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        vector<int> vec;
        vec.clear();
        bool flag;
        for(int j = 1;j<n;j++){
            flag = true;
            int i = 2;
            for(i = 2; i*i < j ;i++){
                if(n%i == 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                vec.push_back(i);
            }
        }
        return vec.size();
    }
};
// @lc code=end

