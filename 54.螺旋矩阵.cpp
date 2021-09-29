/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.size() == 0||matrix[0].size() == 0){
            return {};
        }

        int row = matrix.size(),column = matrix[0].size();
        vector<int> order;
        int left = 0,right = column - 1,top = 0, bottom = row - 1;
        while(left <= right && top <= bottom){
            for(int c = left;c <= right;c ++){
                order.push_back(matrix[top][c]);
            }
            for(int r = top + 1;r <= bottom ;r++){
                order.push_back(matrix[r][right]);
            }
            if(left < right && top < bottom){
                for(int c = right -1;c > left; c--){
                    order.push_back(matrix[bottom][c]);
                }
                for(int r = bottom;r > top;r--)
                {
                    order.push_back(matrix[r][left]);
                }
            }
            left++;
            right--;
            top++;
            bottom--; 
        }
        return order;
    }
};
// @lc code=end

