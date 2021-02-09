# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: ListNode, k: int) -> ListNode:
        nodes = []
        lists = []
        
        if not head:
            return
        
        while head:
            nodes.append(head.val)
            head = head.next
        
        length = len(nodes)
        nodes[k - 1], nodes[length - k] = nodes[length - k], nodes[k - 1]

        for i in nodes:
            lists.append(ListNode(i))
        
        for i in range(len(lists) - 1):
            lists[i].next = lists[i + 1]

        return lists[0]