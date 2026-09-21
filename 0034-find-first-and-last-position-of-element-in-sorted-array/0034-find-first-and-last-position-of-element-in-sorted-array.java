class Solution {
    public int[] searchRange(int[] nums, int target) {
        int left=0,right=nums.length-1,first=-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                first=mid;
                right=mid-1;
            }
            if(nums[mid]>target)
            {
                right=mid-1;
            }
            if(nums[mid]<target)
            {
                left=mid+1;
            }
        }
        int last=-1;
        left=0;
        right=nums.length -1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                last=mid;
                left=mid+1;
            }
            if(nums[mid]<target)
            {
                left=mid+1;
            }
            if(nums[mid]>target)
            {
                right=mid-1;
            }
        }
        int[] arr=new int[2];
        arr[0]=first;
        arr[1]=last;
        return arr;
        
    }
}