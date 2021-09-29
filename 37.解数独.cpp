/*
 * @lc app=leetcode.cn id=37 lang=cpp
 *
 * [37] 解数独
 */

// @lc code=start
class Solution {
private :
    int line[9];
    int column[9];
    int block[3][3];
    bool valid;
    vector<pair<int,int> > spaces;


public:
    void solveSudoku(vector<vector<char>>& board) {
        line[i] = (1<< digit);
        column[j] = (1<<digit);
        block[i/3][j/3] ^= (1<< digit);

    }

    
};
// @lc code=end

