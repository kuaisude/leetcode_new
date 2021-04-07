/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
    if( s.length() == 0)
    {
        return -1;
    }
    map<char,int> map_ro;
    map_ro.insert(pair<char, int>('I', 1) );
    map_ro.insert(pair<char, int>('V', 5) );
    map_ro.insert(pair<char, int>('X', 10) );
    map_ro.insert(pair<char, int>('L', 50) );
    map_ro.insert(pair<char, int>('C', 100) );
    map_ro.insert(pair<char, int>('D', 500) );
    map_ro.insert(pair<char, int>('M', 1000) );
   
    int len = s.length();
    
    int result = map_ro[s[len-1]];
    
    for(int i = len - 2;i>= 0 ;i--)
    {
    	if(map_ro[s[i]]>=map_ro[s[i+1]]){
    		result += map_ro[s[i]];
		}else
		{
			result -= map_ro[s[i]];
		}
	}
    
    return result;
    }
};
// @lc code=end

