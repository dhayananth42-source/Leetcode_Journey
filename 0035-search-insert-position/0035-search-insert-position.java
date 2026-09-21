class Solution {
    public int searchInsert(int[] nums, int target) {
        int left=0,right=nums.length -1,pos=nums.length;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                pos=mid;
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return pos;
    }
}