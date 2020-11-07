/* 给定两个表示复数的字符串。

返回表示它们乘积的字符串。注意，根据定义 i2 = -1 。

示例 1:

输入: "1+1i", "1+1i"
输出: "0+2i"
解释: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i ，你需要将它转换为 0+2i 的形式。
示例 2:

输入: "1+-1i", "1+-1i"
输出: "0+-2i"
解释: (1 - i) * (1 - i) = 1 + i2 - 2 * i = -2i ，你需要将它转换为 0+-2i 的形式。 
注意:

输入字符串不包含额外的空格。
输入字符串将以 a+bi 的形式给出，其中整数 a 和 b 的范围均在 [-100, 100] 之间。输出也应当符合这种形式。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/complex-number-multiplication
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int a1,a2,b1,b2;
        int r1,r2;
        char c;

        stringstream ss1(a);
        stringstream ss2(b);

        ss1>>a1>>c>>b1;
        ss2>>a2>>c>>b2;

        r1=a1*a2-b1*b2;
        r2=a1*b2+a2*b1;

        return to_string(r1)+"+"+to_string(r2)+"i";
    }
}; */

/* 输出模拟 */