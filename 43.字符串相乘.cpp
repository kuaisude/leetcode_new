/*
 * @lc app=leetcode.cn id=43 lang=cpp
 *
 * [43] 字符串相乘
 */

// @lc code=start
class Solution {
public:
    string pu(vector<string> vec){
        int	n = vec.size();
        int j = 0;
        string ans = "";
        for(int i = 0;i<vec[n-1].size();i++){
            int temp = 0;
            for(int j = 0;j<n;j++){
                if(vec[j].size() <= i){
                    temp += 0;
                }else{
                    temp += vec[j][vec[j].size() - i-1] - '0';
                }
            }
            temp += j;
            j = temp/10;
            //cout << temp << endl;
            ans += ((temp%10)+'0');
        }
        while(j>0){
            ans += (j%10 + '0');
            j /= 10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string multi(string s,int a){
        string ans = "";
        int j = 0;
        int n = s.size();
        for(int i = 1;i <= n;i++){
            int w = s[n-i] - '0';
            w = w*a + j;
            j = w/10;
            ans += ((w%10)+'0');
        }
        if(j > 0)
            ans += (j+'0');
        
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string multiply(string num1, string num2) {
        if(num1[0] == '0' || num2[0] == '0'){
            return "0";
        }
        string ans = "";
        int n = num1.size();
        int m = num2.size();
        vector<string> vec ;
        int j = 0;
        for(int i = 0;i < m;i++){
            string a = multi(num1,num2[m-i-1] - '0');
            for(int j = 0;j<i;j++){
                a += '0';
            }
            //cout << a << endl;
            vec.push_back(a);
        }
        ans = pu(vec);
        return ans;
    }

};
// @lc code=end

