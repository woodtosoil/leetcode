#
# @lc app=leetcode.cn id=38 lang=python3
#
# [38] 外观数列
#

# @lc code=start
class Solution:
    def countAndSay(self, n: int) -> str:
        res='1'
        if n==1:
            return res

        for i in range(2,n+1):
            j=0
            lis=''
            while j<len(res):
                k=j
                while k<len(res)-1 and res[k]==res[k+1]:
                    k=k+1
                lis=lis+str(k+1-j)+res[k]
                j=k+1
            res=lis
        return res


        # @lc code=end

