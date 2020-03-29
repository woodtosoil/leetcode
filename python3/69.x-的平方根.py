#
# @lc app=leetcode.cn id=69 lang=python3
#
# [69] x 的平方根
#

# @lc code=start
class Solution:
    def mySqrt(self, x: int) -> int:
        a=0
        while a**2<=x:
            a=a+1
        return a-1
##########极速算法？#########
#return int(x**0.5)
###########基本不等式法############
#####(a+b)/2 >=√ab (a>0,b>0)基于此###
    # r = x
    # while r*r > x:
    #     r = (r + x/r) // 2
    # return int(r)
# @lc code=end

