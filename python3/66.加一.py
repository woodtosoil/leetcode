#
# @lc app=leetcode.cn id=66 lang=python3
#
# [66] 加一
#

# @lc code=start
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        c=[]
        a=""
        for i in digits:
            a=a+str(i)
        a=int(a)+1
        #也可以用下句实现列表中的元素类型转换
        # str_list=map(lambda x:str(x),digits)
        #join用来把列表转为字符串
        # str1=int("".join(str_list))
        # str1=str1+1
        for i in str(a):
            c=c+[int(i)]
        return c
# @lc code=end

