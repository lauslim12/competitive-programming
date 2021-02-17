# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        answer = []
        
        if root:
            answer.append(root.val)
            answer += self.preorderTraversal(root.left)
            answer += self.preorderTraversal(root.right)
        
        return answer