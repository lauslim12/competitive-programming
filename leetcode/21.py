# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        nums1 = []
        nums2 = []
        answer_linked_list = []
        
        if not l1 and not l2:
            return
        
        while l1:
            nums1.append(l1.val)
            l1 = l1.next
        
        while l2:
            nums2.append(l2.val)
            l2 = l2.next
        
        nums = sorted(nums1 + nums2)
        
        for i in nums:
            answer_linked_list.append(ListNode(i))
        
        for i in range(len(answer_linked_list) - 1):
            answer_linked_list[i].next = answer_linked_list[i + 1]
        
        return answer_linked_list[0]