class Node(object):
    def __init__(self,data,next=None):
        self.data =data
        self.next = next
    def __str__(self):
        return self.data

class linkedlist(object):
    def __init__(self,head=None):
        self.head=head
    def __len__(self):
        curr =self.head
        counter=0
        while curr is not None:
            counter += 1
            curr = curr.next
        return counter