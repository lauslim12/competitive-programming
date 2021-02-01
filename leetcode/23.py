# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        ans = []
        tmpp = []
        newList = ListNode()
        
        for list in lists:
            tmp = list
            
            while tmp:
                ans.append(tmp.val)
                tmp = tmp.next
        
        for x in sorted(ans):
            tmpp.append(ListNode(x))
        
        i = 0
        while i < len(tmpp) - 1:
            tmpp[i].next = tmpp[i + 1]
            i += 1

        if not tmpp:
            return None

        return tmpp[0]