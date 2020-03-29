#
# @lc app=leetcode.cn id=83 lang=python3
#
# [83] 删除排序链表中的重复元素
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        p=head
        ##p可以看做指向链表头的指针
        if p==None or p.next==None:
            return head
        while p.next:
            #判断两者数值是否相等
            if p.val==p.next.val:
                #此处相当于删除p.next
                p.next=p.next.next
            else:
                p=p.next
        return head
#48ms
# @lc code=end

