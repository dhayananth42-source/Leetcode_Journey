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
     static int min=Integer.MAX_VALUE;
    static void mindepth(TreeNode root,int count)
    {
         
           if(root==null)
           {
              return;
           }
           
            count++;if(root.left == null && root.right == null)
             { if(min>count)
               { 
                min=count;
               } 
             }
            mindepth(root.left,count);
            mindepth(root.right,count);

    }
    public int minDepth(TreeNode root) {
        min=Integer.MAX_VALUE;
        if(root==null)
        {
            return 0;
        }
        mindepth(root,0);
        return min;
        
    }
}