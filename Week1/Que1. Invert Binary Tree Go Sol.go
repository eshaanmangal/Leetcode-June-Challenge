/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

func inverting(root *TreeNode){
    
    if root==nil{
        return
    }
    
    left := root.Left
    right := root.Right
    root.Left = right
    root.Right = left
    
    inverting(root.Left)
    inverting(root.Right)
}

func invertTree(root *TreeNode) *TreeNode {
    
    inverting(root) 
    return root
}