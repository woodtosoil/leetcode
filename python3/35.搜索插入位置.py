#
# @lc app=leetcode.cn id=35 lang=python3
#
# [35] 搜索插入位置
#

# @lc code=start
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        for i in range(len(nums)):
            if nums[i]==target:
                return i
                break
            else:
                if nums[i]>target:
                    return i
                    break
                elif i==len(nums)-1:
                    return i+1

                # if i>0 and nums[i-1]<target<nums[i]:
                #     return i
                # if i==0 and nums[0]>target:
                #     return i
# @lc code=end

