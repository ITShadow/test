/* 给你长度相等的两个字符串 s1 和 s2 。一次 字符串交换 操作的步骤如下：选出某个字符串中的两个下标（不必不同），并交换这两个下标所对应的字符。

如果对 其中一个字符串 执行 最多一次字符串交换 就可以使两个字符串相等，返回 true ；否则，返回 false 。

 

示例 1：

输入：s1 = "bank", s2 = "kanb"
输出：true
解释：例如，交换 s2 中的第一个和最后一个字符可以得到 "bank"
示例 2：

输入：s1 = "attack", s2 = "defend"
输出：false
解释：一次字符串交换无法使两个字符串相等
示例 3：

输入：s1 = "kelb", s2 = "kelb"
输出：true
解释：两个字符串已经相等，所以不需要进行字符串交换
示例 4：

输入：s1 = "abcd", s2 = "dcba"
输出：false
 

提示：

1 <= s1.length, s2.length <= 100
s1.length == s2.length
s1 和 s2 仅由小写英文字母组成

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/check-if-one-string-swap-can-make-strings-equal
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution 
{
    public:
        bool areAlmostEqual(string s1, string s2) 
        {
            int cnt = 0, index[3];
            int len = s1.length();
            for(int i = 0; i < len; i++)//循环找出字符串中不同的元素并记录下标
            {
                if(s1[i] != s2[i])
                {
                    index[cnt] = i;
                    cnt++;
                }
                if(cnt > 2)//计数超过2就跳出
                    break;
            }
            //分情况讨论
            if(!cnt)
                return true;
            if(cnt==2 && s1[index[0]] == s2[index[1]] && s1[index[1]] == s2[index[0]])
                return true;
            return false;
        }
};
 */