/* 自除数 是指可以被它包含的每一位数除尽的数。

例如，128 是一个自除数，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。

还有，自除数不允许包含 0 。

给定上边界和下边界数字，输出一个列表，列表的元素是边界（含边界）内所有的自除数。

示例 1：

输入： 
上边界left = 1, 下边界right = 22
输出： [1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22]
注意：

每个输入参数的边界满足 1 <= left <= right <= 10000。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/self-dividing-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
        bool isSelfDividingNumber(int n)
        {
            int tempOrigin=n;
            while(n)
            {
                int temp=n%10;
                if(temp==0 || tempOrigin % temp!=0) return false;

                n=n/10;
            }
            return true;
        }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>res;

        for(int i=left;i<=right;i++)
        {
            if(isSelfDividingNumber(i)) res.push_back(i);
        }
        return res;
    }
}; */