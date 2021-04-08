/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {

//问题转化成了从根节点到空节点一共有多少条路径；
public:
    map<char , string> d;
    vector<string> res;
    
    void findCombination(string digits, int index, string s){

        if(index == digits.size()){
            res.push_back(s);
            return;
        }

        char c = digits[index];
        string letters = d[c];
        for(int i = 0 ; i < letters.size() ; i ++){
            findCombination(digits, index+1, s + letters[i]);
        }

        return;
    }

    vector<string> letterCombinations(string digits) {
    
        d.insert(pair<char,string>('2',"abc") );
        d.insert(pair<char,string>('3',"def") );
        d.insert(pair<char,string>('4',"ghi") );
        d.insert(pair<char,string>('5',"jkl") );
        d.insert(pair<char,string>('6',"mno") );
        d.insert(pair<char,string>('7',"pqrs") );
        d.insert(pair<char,string>('8',"tuv") );
        d.insert(pair<char,string>('9',"wxyz") );

        if(digits.size() == 0){
            return res;
        }
        findCombination(digits, 0, "");
        return res;
    }
};
// @lc code=end

