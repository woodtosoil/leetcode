#
# @lc app=leetcode.cn id=70 lang=python3
#
# [70] 爬楼梯
#

# @lc code=start
class Solution:
    def climbStairs(self, n: int) -> int:
        ###斐波那契法###f(n)=f(n-1)+f(n-2)
        #第n个台阶只能从第n-1或者n-2个上来。
        # 到第n-1个台阶的走法 + 第n-2个台阶的走法 = 到第n个台阶的走法，
        # 已经知道了第1个和第2个台阶的走法，一路加上去。
        a = 1
        b = 2
        if n == 1:
            return 1
        elif n == 2:
            return 2
        else:
            for i in range(n-2):
                temp=b
                b=a+b
                a=temp
            return b
 #48ms
            #return self.climbStairs(n - 1) + self.climbStairs(n - 2)
# @lc code=end

