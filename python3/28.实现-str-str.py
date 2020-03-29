#
# @lc app=leetcode.cn id=28 lang=python3
#
# [28] 实现 strStr()
#

# @lc code=start
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        
        if needle=="":
            return 0
        else:
            if needle in haystack:
                flag = False
                for i in range(len(haystack)):
                    for j in range(len(needle)):
                        if haystack[j+i]==needle[j]:
                            flag = True
                            continue
                        else:
                            flag = False
                            break
                        #flag=True
                    if flag==True:
                        return i
                        break

            else:
                return -1
# @lc code=end

