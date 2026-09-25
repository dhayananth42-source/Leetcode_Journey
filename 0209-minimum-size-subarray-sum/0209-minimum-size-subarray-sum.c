int minSubArrayLen(int target, int* nums, int numsSize) {
    int left=0,right=0,min=INT_MAX,length,sum=0;
    while(right<numsSize)
    {
        sum+=nums[right];
        right++;
        while(sum>=target)
        {
            length=right-left;
            sum-=nums[left];
            left++;
            if(min>length)
            {
              min=length;
            }
        }

    }
    if(min==INT_MAX)
    {
        return 0;
    }
    return min;
    
}