class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        PriorityQueue<Integer> max = new PriorityQueue<>();
         for(int i=0;i<matrix.length;i++)
         {
            for(int j=0;j<matrix.length;j++)
            {
                max.add(matrix[i][j]);
            }
         }
         int temp=0,count=0;
         while(count!=k)
         {
             temp=max.poll();
             count++;
         }
         return temp;

     
        
    }
}