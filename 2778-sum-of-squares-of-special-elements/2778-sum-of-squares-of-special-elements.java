class Solution {
    public int sumOfSquares(int[] nums) {
        int n=nums.length,sum=0;
        for(int i=1;i<=nums.length;i++)
        {
            if(n%i==0)
            {
                int sqr=nums[i-1]*nums[i-1];
                sum+=sqr;
            }
        }
        return sum;
        
    }
}