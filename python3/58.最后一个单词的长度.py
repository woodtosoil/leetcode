#
# @lc app=leetcode.cn id=58 lang=python3
#
# [58] 最后一个单词的长度
#

# @lc code=start
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s=s.strip(" ")#去除右边末尾空格
        l=s.split(" ")[-1]#字符串转为列表，并取最后一个单词
        return len(l)
# @lc code=end

