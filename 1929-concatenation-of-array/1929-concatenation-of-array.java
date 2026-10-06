class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] arr = new int[nums.length * 2];
        int i=0,j;
        for(i=0;i<nums.length;i++)
        {
            arr[i]=nums[i];
        }
        for(j=i;j< nums.length*2;j++)
        {
            arr[j]=nums[j-i];
        }
        return arr;

        
    }
}