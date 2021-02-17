# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def generateBST(self, array: List[int]) -> TreeNode:
        if not array:
            return
        
        mid = floor(len(array) / 2)
        root = TreeNode(array[mid])
    
        root.left = self.generateBST(array[:mid])
        root.right = self.generateBST(array[mid + 1:])
        
        return root
    
    def sortedListToBST(self, head: ListNode) -> TreeNode:
        my_list = []
        
        while head:
            my_list.append(head.val)
            head = head.next
        
        my_tree = self.generateBST(my_list)
        
        return my_tree
        