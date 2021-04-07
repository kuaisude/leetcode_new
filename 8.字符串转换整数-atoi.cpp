/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string str) {
       if (str.length() == 0) return 0;

    int MAX_VALUE = 2147483647;
    int MIN_VALUE = -2147483648;

    // 正负号标记
    int sign = 1;

    // 转换值
    int base = 0;

    // 索引位数
    int i = 0;

    // 剔除开始空白字符
    while (str[i] == ' ')
        i++;

    // 判断正负号
    if (str[i] == '-' || str[i] == '+')
        sign = str[i++] == '-' ? -1 : 1;

    // 索引有效数字字符
    while (i < str.length() && str[i] >= '0' && str[i] <= '9') {

        if (base > MAX_VALUE / 10 || (base == MAX_VALUE / 10 && str[i] - '0' > 7) ) {
            return (sign == 1) ? MAX_VALUE : MIN_VALUE;
        }

        // 计算转换值
        base = 10 * base + (str[i++] - '0');
    }

    // 计算结果值
    return base * sign;

    }
};
// @lc code=end

