/* 给定一个非负整数数组 A， A 中一半整数是奇数，一半整数是偶数。

对数组进行排序，以便当 A[i] 为奇数时，i 也是奇数；当 A[i] 为偶数时， i 也是偶数。

你可以返回任何满足上述条件的数组作为答案。

 

示例：

输入：[4,2,5,7]
输出：[4,5,2,7]
解释：[4,7,2,5]，[2,5,4,7]，[2,7,4,5] 也会被接受。
 

提示：

2 <= A.length <= 20000
A.length % 2 == 0
0 <= A[i] <= 1000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-array-by-parity-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int>odd,doubleOdd;

        for(auto c:A)
        {
            if(c%2==0) doubleOdd.push_back(c);
            else odd.push_back(c);
        }
        int j=0,k=0;
        for(int i=0;i<A.size();)
        {
            A[i]=doubleOdd[j];
            i=i+2;
            j++;
        }

        for(int i=1;i<A.size();)
        {
            A[i]=odd[k];
            i=i+2;
            k++;
        }
        return A;

    }
}; */

/* 直接搞 */