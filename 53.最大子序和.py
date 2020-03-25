#
# @lc app=leetcode.cn id=53 lang=python
#
# [53] 最大子序和
#

# @lc code=start
class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        for i in range(1,len(nums)):
            nums[i]=nums[i]+max(nums[i-1],0)
            #判断，前一项正数就累加下去，类似滑窗.如此nums变为和数列，再取最大的那个和
        return max(nums)
# @lc code=end

