/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
class Solution {
public:
    string intToRoman(int num) {
    if( num == 0)
    {
        return "o";
    }
    map<int,char> map_ro;
    map_ro.insert(pair<int,char>(1,'I') );
    map_ro.insert(pair<int,char>(5,'V') );
    map_ro.insert(pair<int,char>(10,'X') );
    map_ro.insert(pair<int,char>(50,'L') );
    map_ro.insert(pair<int,char>(100,'C') );
    map_ro.insert(pair<int,char>(500,'D') );
    map_ro.insert(pair<int,char>(1000,'M') );
    
    string str;
    int a,b,c,d;
    a = num%10000/1000;//千位
    b = num%1000/100;//百位
    c = num%100/10;//十位
    d = num%10;//个位

    if(a>0){
       for(int i = 0;i<a;i++)
            str.push_back(map_ro[1000]);
    }

    if(b==9){
        str.push_back(map_ro[100]);
        str.push_back(map_ro[1000]);
    }else if(b > 4)
    {
        str.push_back(map_ro[500]);
        for(int i = 0;i<b-5;i++){
             str.push_back(map_ro[100]);
        }
    }else if(b == 4){
        str.push_back(map_ro[100]);
        str.push_back(map_ro[500]);
    }else if(b > 0){
        for(int i = 0;i<b;i++){
             str.push_back(map_ro[100]);
        }
    }

    if(c==9){
        str.push_back(map_ro[10]);
        str.push_back(map_ro[100]);
    }else if(c > 4)
    {
        str.push_back(map_ro[50]);
        for(int i = 0;i<c-5;i++){
             str.push_back(map_ro[10]);
        }
    }else if(c == 4){
        str.push_back(map_ro[10]);
        str.push_back(map_ro[50]);
    }else if(c > 0){
        for(int i = 0;i<c;i++){
             str.push_back(map_ro[10]);
        }
    }
    
    if(d==9){
        str.push_back(map_ro[1]);
        str.push_back(map_ro[10]);
    }else if(d > 4)
    {
        str.push_back(map_ro[5]);
        for(int i = 0;i<d-5;i++){
             str.push_back(map_ro[1]);
        }
    }else if(d == 4){
        str.push_back(map_ro[1]);
        str.push_back(map_ro[5]);
    }else if(d > 0){
        for(int i = 0;i<d;i++){
             str.push_back(map_ro[1]);
        }
    }

    
    return str;
    }
};
// @lc code=end

