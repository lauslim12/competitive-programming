# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        my_linked_list = []
        num1 = []
        num2 = []
        
        while l1:
            num1.append(l1.val)
            l1 = l1.next
        
        while l2:
            num2.append(l2.val)
            l2 = l2.next
        
        integer_one = int(''.join(map(str, num1[::-1])))
        integer_two = int(''.join(map(str, num2[::-1])))
        answer = [int(i) for i in str(integer_one + integer_two)]
            
        for digit in answer[::-1]:
            node = ListNode(digit)
            my_linked_list.append(node)
        
        i = 0
        while i < len(my_linked_list) - 1:
            my_linked_list[i].next = my_linked_list[i + 1]
            i += 1
        
        return my_linked_list[0]
            