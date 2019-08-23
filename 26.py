##Remove Duplicates from Sorted Array##
'''给定一个排序数组，在原数组中“删除”重复出现的数字，使得每个元素只出现一次，并且返回“新”数组的长度。不要使用额外的数组空间，必须在不使用额外空间的条件下原地完成
'''
class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums)==0:
            return 0
        index=1
        temp=nums[0]
        while index != len(nums):
            if nums[index]==temp:
                nums.pop(index)
            else:
                temp=nums[index]
                index+=1
        return len(nums)
       #return index+1
