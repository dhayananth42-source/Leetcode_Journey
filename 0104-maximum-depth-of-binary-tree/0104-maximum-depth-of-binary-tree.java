/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
     static int max=0;
    static void maxdepth(TreeNode root,int count)
    {
           if(root==null)
           {
             if(max<count)
             {
               max=count;
             } 
             return;
           }
            count++;
            maxdepth(root.left,count);
            maxdepth(root.right,count);

    }
    public int maxDepth(TreeNode root) {
        max=0;
        maxdepth(root,0);
        return max;
        
    }
}