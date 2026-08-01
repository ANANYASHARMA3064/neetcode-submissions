class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True

        def dfs(root):
            if root is None:
                return 0
            return max(dfs(root.left), dfs(root.right)) + 1

        def res(root):
            if root is None:
                return True

            if abs(dfs(root.left) - dfs(root.right)) > 1:
                return False

            return res(root.left) and res(root.right)

        return res(root)

        

        
        