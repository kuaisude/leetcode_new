/*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
vector<int> v(9, 0);
        int n1, n2, n3;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.')
                    continue;

                // 将char转为int，且取值范围从['1', '9'] 变为 [0, 8]
                int val = board[i][j] - '1'; 
                int idx = i / 3 * 3 + j / 3;    // 定位到3*3宫格中   
                n1 = 0x01 << val;
                n2 = 0x01 << 9 << val;
                n3 = 0x01 << 9 << 9 << val;

                if((v[i] & n1) != n1 && (v[j] & n2) != n2 && (v[idx] & n3) != n3){
                    v[i] |= n1;
                    v[j] |= n2;
                    v[idx] |= n3;
                }
                else 
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end

