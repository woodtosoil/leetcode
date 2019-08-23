#-*- coding:utf-8 -*-
class Node:
    def __init__(self,cargo=None,next=None):
        self.cargo=cargo
        self.next = next
    def __str__(self):
        return str(self.cargo)
node1=Node(1)
node2=Node(2)
node3=Node(3)
node1.next=node2
node2.next=node3
def printlist(node):
    while node:
        print(node)
        node=node.next
def backprint(node):
    if node == None:
        return 0
    backprint(node.next)#嵌套循环
    print(node)
backprint(node1)