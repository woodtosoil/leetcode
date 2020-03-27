#
# @lc app=leetcode.cn id=67 lang=python3
#
# [67] 二进制求和
#

# @lc code=start
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        sa=0
        sb=0
        la=len(a)
        lb=len(b)
        for i in range(la):
            sa=sa+int(a[la-1-i])*(2**i)
        #注意输入元素的先后顺序
        for j in range(lb):
            sb=sb+int(b[lb-1-j])*(2**j)
        #使用bin可以把十进制数字转为二进制，但是会保留两位前缀
        c=(bin(sa+sb))[2:]
        return c
    #终极简化解法
    #return bin(int(a, 2) + int(b, 2))[2:]
# @lc code=end

