# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        temp_array = []
        my_linked_list = []
        
        while head:
            temp_array.append(head.val)
            head = head.next

        temp_array.pop(len(temp_array) - n)
        
        if not temp_array:
            return
        
        for i in temp_array:
            my_linked_list.append(ListNode(i))
        
        for i in range(len(temp_array) - 1):
            my_linked_list[i].next = my_linked_list[i + 1]

        return my_linked_list[0]
        