# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:    
    def pathSum(self, root: TreeNode, targetSum: int) -> List[List[int]]:
        list_of_paths = []
        answers = []
        
        def traverseTree(root: TreeNode, paths: List[int]) -> None:
            if not root:
                return
            
            paths.append(root.val)
            
            if not root.left and not root.right:
                list_of_paths.append(list(paths))
            
            traverseTree(root.left, paths)
            traverseTree(root.right, paths)
            
            paths.pop()
        
        traverseTree(root, [])
        
        for subarray in list_of_paths:
            if sum(subarray) == targetSum:
                answers.append(subarray)
        
        return answers